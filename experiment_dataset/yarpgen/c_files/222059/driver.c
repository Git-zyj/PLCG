#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3013049456U;
int var_10 = -1383965909;
short var_11 = (short)22085;
int var_16 = -885931518;
int zero = 0;
short var_18 = (short)-13334;
unsigned short var_19 = (unsigned short)20423;
unsigned short var_20 = (unsigned short)26331;
unsigned short var_21 = (unsigned short)49898;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
