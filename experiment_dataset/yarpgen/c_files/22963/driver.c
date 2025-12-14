#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5444099108273344241LL;
unsigned long long int var_2 = 1661844242570820403ULL;
unsigned long long int var_8 = 8523477550861075400ULL;
signed char var_10 = (signed char)37;
int zero = 0;
unsigned long long int var_11 = 10088283429305588186ULL;
unsigned long long int var_12 = 3660903025946390735ULL;
_Bool var_13 = (_Bool)1;
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
