#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-21943;
unsigned char var_5 = (unsigned char)107;
unsigned short var_6 = (unsigned short)25562;
int var_14 = -1179842109;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3264532933U;
int zero = 0;
int var_19 = -306927909;
short var_20 = (short)29607;
void init() {
}

void checksum() {
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
