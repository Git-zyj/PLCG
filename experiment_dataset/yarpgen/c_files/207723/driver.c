#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3102183326700120178LL;
signed char var_2 = (signed char)-118;
unsigned long long int var_4 = 17347155913697071551ULL;
unsigned char var_6 = (unsigned char)173;
unsigned long long int var_7 = 8622437538968432584ULL;
signed char var_8 = (signed char)-91;
unsigned long long int var_10 = 11220792337980229602ULL;
signed char var_12 = (signed char)-2;
int zero = 0;
unsigned char var_13 = (unsigned char)126;
int var_14 = -2094866805;
unsigned int var_15 = 1072305271U;
_Bool var_16 = (_Bool)1;
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
