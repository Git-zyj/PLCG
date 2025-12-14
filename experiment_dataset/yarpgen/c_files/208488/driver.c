#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13423691942349415942ULL;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned char var_16 = (unsigned char)67;
int zero = 0;
signed char var_17 = (signed char)125;
unsigned char var_18 = (unsigned char)16;
unsigned char var_19 = (unsigned char)187;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
