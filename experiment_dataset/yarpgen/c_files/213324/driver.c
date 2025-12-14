#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)239;
unsigned char var_1 = (unsigned char)178;
unsigned long long int var_5 = 16466898367946011715ULL;
signed char var_11 = (signed char)46;
int zero = 0;
unsigned int var_14 = 3010072316U;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)161;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
