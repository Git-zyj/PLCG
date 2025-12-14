#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)213;
unsigned int var_3 = 511089706U;
unsigned short var_5 = (unsigned short)53544;
signed char var_8 = (signed char)24;
unsigned int var_12 = 3947423921U;
unsigned char var_14 = (unsigned char)45;
unsigned int var_17 = 3599542734U;
int zero = 0;
unsigned long long int var_19 = 12545951038524119958ULL;
short var_20 = (short)6631;
unsigned short var_21 = (unsigned short)18910;
void init() {
}

void checksum() {
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
