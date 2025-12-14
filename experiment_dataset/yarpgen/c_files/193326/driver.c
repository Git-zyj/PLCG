#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)24190;
unsigned short var_4 = (unsigned short)43806;
signed char var_5 = (signed char)-70;
short var_6 = (short)23573;
short var_7 = (short)-30476;
signed char var_10 = (signed char)-36;
int var_11 = 1812080999;
unsigned long long int var_12 = 2428140924013152577ULL;
int zero = 0;
short var_13 = (short)-22559;
unsigned long long int var_14 = 11488000138996172907ULL;
short var_15 = (short)-18835;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
