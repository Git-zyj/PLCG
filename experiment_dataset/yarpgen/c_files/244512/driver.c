#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4000830783U;
signed char var_6 = (signed char)-61;
unsigned long long int var_9 = 9171995046897256277ULL;
int zero = 0;
short var_11 = (short)16728;
short var_12 = (short)-2892;
long long int var_13 = -8436875006286184723LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
