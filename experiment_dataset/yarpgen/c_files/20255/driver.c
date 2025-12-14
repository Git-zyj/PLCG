#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3752924821U;
unsigned int var_2 = 1776899984U;
unsigned int var_8 = 2270419780U;
signed char var_13 = (signed char)36;
signed char var_14 = (signed char)31;
int zero = 0;
unsigned int var_15 = 1726318812U;
unsigned int var_16 = 1114010266U;
signed char var_17 = (signed char)75;
unsigned int var_18 = 3355806090U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
