#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-12153;
unsigned char var_7 = (unsigned char)28;
short var_8 = (short)803;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned int var_14 = 2026528922U;
int zero = 0;
signed char var_15 = (signed char)61;
unsigned short var_16 = (unsigned short)2423;
void init() {
}

void checksum() {
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
