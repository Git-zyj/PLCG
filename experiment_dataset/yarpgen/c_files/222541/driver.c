#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-46;
unsigned long long int var_7 = 13201422322635809702ULL;
int var_11 = 1934209802;
int zero = 0;
unsigned long long int var_12 = 18128912819430002436ULL;
long long int var_13 = 3052921421735628556LL;
unsigned short var_14 = (unsigned short)16892;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
