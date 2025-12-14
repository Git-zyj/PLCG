#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -237831559;
unsigned char var_6 = (unsigned char)91;
short var_7 = (short)-24544;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)45582;
int zero = 0;
unsigned char var_13 = (unsigned char)242;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)50;
unsigned long long int var_16 = 4239014295013166454ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
