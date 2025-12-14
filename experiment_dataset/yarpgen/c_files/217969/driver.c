#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17991666373624044713ULL;
_Bool var_2 = (_Bool)0;
unsigned char var_6 = (unsigned char)8;
long long int var_11 = 6303651648338084827LL;
unsigned short var_12 = (unsigned short)55693;
unsigned int var_13 = 3223103636U;
unsigned short var_14 = (unsigned short)39620;
signed char var_16 = (signed char)3;
int zero = 0;
unsigned long long int var_18 = 7244837829682904481ULL;
short var_19 = (short)9578;
unsigned char var_20 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
