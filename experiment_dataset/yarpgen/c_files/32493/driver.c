#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)83;
unsigned int var_3 = 3784356719U;
unsigned short var_4 = (unsigned short)62392;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 1000690634U;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 8891081354593507814ULL;
unsigned long long int var_11 = 13788362604446201527ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 7597207913526814477ULL;
unsigned char var_14 = (unsigned char)201;
int var_15 = -2074647780;
unsigned char var_16 = (unsigned char)151;
long long int var_17 = -1750686723289646457LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
