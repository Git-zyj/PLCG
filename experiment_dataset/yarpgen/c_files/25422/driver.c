#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1207883796;
long long int var_7 = -2877219354092456256LL;
long long int var_8 = 173938303884256705LL;
unsigned short var_11 = (unsigned short)7273;
unsigned int var_13 = 2299038581U;
int var_14 = -1421934541;
long long int var_15 = -2611252971363556230LL;
int zero = 0;
long long int var_16 = -4635273939819683603LL;
long long int var_17 = -42636007717425668LL;
unsigned int var_18 = 67366156U;
int var_19 = 349850556;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
