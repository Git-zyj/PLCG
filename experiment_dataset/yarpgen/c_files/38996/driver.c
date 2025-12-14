#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)36480;
unsigned int var_8 = 1221118097U;
short var_10 = (short)-20134;
unsigned short var_15 = (unsigned short)21568;
int var_16 = -1298878165;
int zero = 0;
unsigned int var_19 = 126204182U;
short var_20 = (short)-6505;
short var_21 = (short)30914;
short var_22 = (short)11702;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
