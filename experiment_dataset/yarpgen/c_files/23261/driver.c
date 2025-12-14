#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7933171965018571165ULL;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
int var_8 = 2071447932;
unsigned short var_11 = (unsigned short)12711;
int zero = 0;
int var_12 = -1177410068;
unsigned int var_13 = 2168286925U;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-14415;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
