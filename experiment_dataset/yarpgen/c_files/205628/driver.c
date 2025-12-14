#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -489485789;
int var_10 = 1581879705;
signed char var_13 = (signed char)-83;
int var_14 = -811729495;
int zero = 0;
unsigned long long int var_16 = 12205590916249117357ULL;
long long int var_17 = -4195019101544032117LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
