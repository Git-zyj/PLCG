#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)19646;
long long int var_11 = -4268587436810535741LL;
unsigned long long int var_13 = 11160546089592589086ULL;
int zero = 0;
long long int var_15 = -7358820757100260117LL;
unsigned long long int var_16 = 3476878571272620245ULL;
long long int var_17 = 476606373077143400LL;
signed char var_18 = (signed char)99;
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
