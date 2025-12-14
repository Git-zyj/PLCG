#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 536579433U;
int var_1 = 2093679926;
unsigned int var_2 = 3284848208U;
signed char var_4 = (signed char)-123;
unsigned long long int var_7 = 14839974607360425717ULL;
unsigned int var_8 = 648247599U;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)148;
int var_12 = -1676750965;
int var_13 = 154290016;
int zero = 0;
int var_14 = 1561642727;
unsigned char var_15 = (unsigned char)196;
short var_16 = (short)20001;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)148;
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
