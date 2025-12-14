#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3414327362U;
int var_9 = -715786944;
unsigned long long int var_10 = 713957179613831819ULL;
long long int var_11 = -8513491296525322263LL;
int zero = 0;
long long int var_18 = -2550603045225442741LL;
unsigned short var_19 = (unsigned short)24690;
long long int var_20 = 7221001472395235270LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
