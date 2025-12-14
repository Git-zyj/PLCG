#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3935;
short var_2 = (short)-31478;
signed char var_5 = (signed char)13;
unsigned char var_9 = (unsigned char)43;
short var_10 = (short)-22316;
signed char var_11 = (signed char)-36;
short var_12 = (short)26105;
unsigned int var_15 = 1542235886U;
unsigned char var_16 = (unsigned char)205;
int zero = 0;
unsigned int var_19 = 358778599U;
unsigned char var_20 = (unsigned char)85;
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
