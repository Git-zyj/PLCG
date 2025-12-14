#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)242;
unsigned long long int var_2 = 17115305807940797465ULL;
unsigned long long int var_8 = 3882566182223600525ULL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-27876;
int var_15 = 260835977;
int zero = 0;
short var_16 = (short)16382;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
