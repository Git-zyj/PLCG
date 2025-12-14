#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1092772787;
int var_5 = 771635034;
unsigned long long int var_7 = 16936878041961500271ULL;
int zero = 0;
long long int var_10 = 5389865232267959536LL;
short var_11 = (short)21091;
signed char var_12 = (signed char)3;
unsigned int var_13 = 669865293U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
