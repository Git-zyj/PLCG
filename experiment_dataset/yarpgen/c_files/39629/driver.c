#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1993516398U;
signed char var_1 = (signed char)125;
int var_2 = 1418445112;
unsigned long long int var_3 = 16195666753994555132ULL;
short var_5 = (short)-7394;
int var_6 = -1674558770;
unsigned int var_8 = 2727909784U;
unsigned short var_9 = (unsigned short)11727;
int zero = 0;
unsigned int var_10 = 2555170551U;
int var_11 = 1194538686;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
