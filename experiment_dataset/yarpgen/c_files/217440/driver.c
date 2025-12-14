#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_3 = (signed char)-39;
long long int var_4 = 3416975686831459381LL;
signed char var_5 = (signed char)-122;
unsigned short var_6 = (unsigned short)33545;
unsigned short var_10 = (unsigned short)51595;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)37979;
int zero = 0;
signed char var_14 = (signed char)127;
unsigned short var_15 = (unsigned short)35958;
long long int var_16 = 2518852268919357730LL;
long long int var_17 = 1824040148398863572LL;
unsigned int var_18 = 517662915U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
