#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 541219915U;
unsigned int var_11 = 570790346U;
unsigned int var_14 = 1012459617U;
short var_17 = (short)13173;
int zero = 0;
unsigned int var_20 = 1252157664U;
unsigned int var_21 = 3045818146U;
void init() {
}

void checksum() {
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
