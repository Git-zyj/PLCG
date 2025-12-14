#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16971312411853466771ULL;
int var_5 = -1950573396;
unsigned char var_6 = (unsigned char)39;
unsigned char var_7 = (unsigned char)232;
int var_8 = 1323857365;
signed char var_11 = (signed char)-69;
unsigned char var_12 = (unsigned char)218;
short var_13 = (short)3536;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)95;
unsigned long long int var_16 = 8539666035772808647ULL;
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
