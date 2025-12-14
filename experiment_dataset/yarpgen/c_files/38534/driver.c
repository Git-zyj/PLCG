#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-909;
short var_13 = (short)-11718;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-22087;
int zero = 0;
int var_18 = -244192923;
unsigned int var_19 = 1644857205U;
_Bool var_20 = (_Bool)1;
int var_21 = 1168431531;
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
