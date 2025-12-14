#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)0;
int var_3 = 806630471;
unsigned char var_8 = (unsigned char)187;
short var_9 = (short)11935;
int var_15 = -1807454936;
_Bool var_16 = (_Bool)0;
int var_17 = 2053367342;
short var_18 = (short)-13442;
int zero = 0;
unsigned int var_19 = 2605161839U;
long long int var_20 = -2589945815549297188LL;
void init() {
}

void checksum() {
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
