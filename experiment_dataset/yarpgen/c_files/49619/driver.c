#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)30286;
unsigned long long int var_13 = 9902230866481007841ULL;
unsigned long long int var_16 = 17400830978434476459ULL;
int zero = 0;
unsigned long long int var_17 = 2663071348701686492ULL;
short var_18 = (short)27047;
signed char var_19 = (signed char)36;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
