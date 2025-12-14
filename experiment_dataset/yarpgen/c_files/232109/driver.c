#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 341959586;
unsigned short var_2 = (unsigned short)1473;
long long int var_6 = -5436672290157814171LL;
unsigned long long int var_11 = 3098158314624639955ULL;
int zero = 0;
unsigned int var_15 = 1914221783U;
unsigned long long int var_16 = 4067145669100242005ULL;
unsigned short var_17 = (unsigned short)36626;
long long int var_18 = 890253379019839588LL;
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
