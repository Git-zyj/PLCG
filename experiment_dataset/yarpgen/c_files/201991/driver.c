#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 608702150;
unsigned short var_2 = (unsigned short)30901;
signed char var_8 = (signed char)-22;
unsigned int var_10 = 3702833607U;
long long int var_11 = 7151431757971830951LL;
unsigned long long int var_15 = 5789799929474878999ULL;
signed char var_16 = (signed char)36;
int zero = 0;
unsigned long long int var_17 = 2358572001724799394ULL;
int var_18 = 272891877;
void init() {
}

void checksum() {
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
