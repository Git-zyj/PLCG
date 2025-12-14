#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -473878799;
int var_1 = 1120260710;
int var_2 = 1431213919;
unsigned long long int var_3 = 131965209316611217ULL;
unsigned int var_5 = 4127126876U;
unsigned int var_10 = 3223203774U;
_Bool var_12 = (_Bool)1;
int var_14 = 2064349118;
int zero = 0;
unsigned short var_16 = (unsigned short)61435;
int var_17 = -2108684088;
short var_18 = (short)-12167;
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
