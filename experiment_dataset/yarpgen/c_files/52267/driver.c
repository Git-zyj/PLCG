#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20523;
unsigned short var_2 = (unsigned short)18303;
unsigned short var_3 = (unsigned short)54507;
unsigned int var_4 = 2523336256U;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)20774;
_Bool var_12 = (_Bool)1;
long long int var_13 = -6129903741943643255LL;
int zero = 0;
long long int var_14 = 5774800843536176429LL;
long long int var_15 = 1267479979653426067LL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)42920;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
