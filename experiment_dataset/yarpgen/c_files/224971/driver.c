#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48783;
_Bool var_1 = (_Bool)0;
unsigned short var_4 = (unsigned short)60833;
int var_5 = -472853260;
unsigned int var_6 = 4177290453U;
int var_9 = 2038994308;
int var_10 = 1227678389;
unsigned short var_11 = (unsigned short)56099;
int zero = 0;
unsigned short var_12 = (unsigned short)27326;
int var_13 = 2038598535;
unsigned long long int var_14 = 15436319145595322811ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
