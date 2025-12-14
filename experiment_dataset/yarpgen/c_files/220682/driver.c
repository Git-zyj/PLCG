#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 7434162296974839530ULL;
unsigned char var_14 = (unsigned char)56;
int zero = 0;
unsigned long long int var_16 = 4298104956018410213ULL;
unsigned char var_17 = (unsigned char)172;
unsigned int var_18 = 1870544655U;
unsigned char var_19 = (unsigned char)210;
unsigned short var_20 = (unsigned short)42805;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
