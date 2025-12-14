#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22934;
long long int var_1 = 8670186968510222584LL;
unsigned short var_2 = (unsigned short)12525;
short var_5 = (short)71;
signed char var_6 = (signed char)122;
long long int var_7 = 2446400344435399567LL;
unsigned char var_8 = (unsigned char)92;
unsigned short var_9 = (unsigned short)42731;
unsigned long long int var_12 = 10479761920660786159ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_14 = 1607947543;
long long int var_15 = 9008025281084160282LL;
unsigned char var_16 = (unsigned char)2;
short var_17 = (short)23659;
unsigned char var_18 = (unsigned char)6;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
