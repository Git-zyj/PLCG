#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-114;
unsigned short var_1 = (unsigned short)59708;
short var_3 = (short)14646;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1292437967U;
unsigned int var_10 = 917603902U;
int zero = 0;
int var_13 = -1486363979;
short var_14 = (short)-3446;
unsigned long long int var_15 = 1885656580700472626ULL;
long long int var_16 = -1130265105336380979LL;
long long int var_17 = 723897865757592830LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
