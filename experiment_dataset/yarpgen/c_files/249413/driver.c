#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36370;
signed char var_2 = (signed char)-15;
unsigned int var_3 = 3552139440U;
unsigned int var_5 = 4020185683U;
unsigned long long int var_8 = 8979881427021404806ULL;
unsigned long long int var_10 = 4800502189050727100ULL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1312451431U;
int zero = 0;
unsigned int var_15 = 3548286532U;
long long int var_16 = -5496395375062284538LL;
unsigned int var_17 = 2954363729U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
