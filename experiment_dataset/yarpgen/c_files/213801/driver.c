#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56337;
unsigned char var_3 = (unsigned char)123;
unsigned long long int var_5 = 11977466742736764092ULL;
unsigned int var_8 = 3833190123U;
unsigned short var_10 = (unsigned short)56354;
unsigned char var_11 = (unsigned char)213;
unsigned short var_12 = (unsigned short)28633;
int zero = 0;
unsigned char var_15 = (unsigned char)1;
unsigned char var_16 = (unsigned char)87;
unsigned short var_17 = (unsigned short)61041;
void init() {
}

void checksum() {
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
