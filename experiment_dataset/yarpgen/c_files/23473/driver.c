#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1470062892U;
unsigned long long int var_10 = 6741960514838350871ULL;
unsigned long long int var_12 = 8011073144678313978ULL;
long long int var_15 = 8830203563776264496LL;
unsigned long long int var_17 = 9208224026422049531ULL;
short var_18 = (short)-22921;
int zero = 0;
unsigned short var_19 = (unsigned short)60393;
unsigned char var_20 = (unsigned char)6;
unsigned char var_21 = (unsigned char)27;
unsigned char var_22 = (unsigned char)30;
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
