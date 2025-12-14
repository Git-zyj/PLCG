#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)232;
unsigned int var_3 = 1788051771U;
unsigned char var_4 = (unsigned char)148;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)3;
unsigned int var_15 = 1608782963U;
unsigned int var_16 = 975915301U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
