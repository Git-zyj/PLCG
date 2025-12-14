#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1415213431163283491ULL;
unsigned short var_5 = (unsigned short)6556;
unsigned int var_7 = 1711589596U;
int var_9 = -2110106184;
unsigned short var_10 = (unsigned short)19478;
unsigned int var_11 = 2518198055U;
unsigned int var_16 = 2087847433U;
int zero = 0;
unsigned int var_17 = 2342016664U;
unsigned int var_18 = 1433685309U;
void init() {
}

void checksum() {
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
