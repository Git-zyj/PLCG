#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14196024380413131069ULL;
unsigned char var_1 = (unsigned char)193;
unsigned long long int var_3 = 15715957645766573420ULL;
long long int var_4 = 67293435282879749LL;
unsigned long long int var_6 = 7788328959151835717ULL;
int var_7 = 1649829986;
short var_8 = (short)-26200;
unsigned char var_9 = (unsigned char)86;
long long int var_10 = 6108500333879981447LL;
signed char var_13 = (signed char)30;
unsigned char var_14 = (unsigned char)231;
int zero = 0;
unsigned int var_16 = 3922945125U;
long long int var_17 = 1400249908985075013LL;
unsigned short var_18 = (unsigned short)29147;
int var_19 = 1888518351;
short var_20 = (short)-14864;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
