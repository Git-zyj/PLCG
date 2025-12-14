#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12963183376032780237ULL;
_Bool var_3 = (_Bool)1;
long long int var_4 = 2642620897704893178LL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3353652103U;
int var_7 = 1919941448;
_Bool var_10 = (_Bool)1;
int var_11 = -905993843;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)16425;
int zero = 0;
unsigned long long int var_14 = 12757915968201471721ULL;
int var_15 = -1874964710;
signed char var_16 = (signed char)-99;
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
