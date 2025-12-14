#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)165;
long long int var_1 = -451133523647411945LL;
unsigned long long int var_2 = 3479252666094328139ULL;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-30738;
unsigned char var_5 = (unsigned char)15;
unsigned short var_6 = (unsigned short)12162;
int var_7 = 1466735135;
unsigned long long int var_8 = 14658133630639340553ULL;
unsigned long long int var_9 = 9128526964156349876ULL;
unsigned int var_10 = 2431529016U;
unsigned char var_11 = (unsigned char)22;
int zero = 0;
unsigned char var_12 = (unsigned char)132;
long long int var_13 = -642979074171183388LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
