#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = -2047606266;
long long int var_11 = -5374290446792715390LL;
int zero = 0;
unsigned int var_18 = 1710827771U;
unsigned int var_19 = 2741712315U;
short var_20 = (short)-7052;
short var_21 = (short)11810;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
