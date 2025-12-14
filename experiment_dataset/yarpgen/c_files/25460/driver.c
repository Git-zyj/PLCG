#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)29652;
_Bool var_8 = (_Bool)1;
unsigned int var_13 = 2457107599U;
int zero = 0;
unsigned long long int var_16 = 912315687705536267ULL;
signed char var_17 = (signed char)-58;
signed char var_18 = (signed char)30;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
