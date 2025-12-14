#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7615103272411393066LL;
signed char var_4 = (signed char)64;
int var_7 = 670465012;
int zero = 0;
unsigned long long int var_14 = 13252993103322883647ULL;
short var_15 = (short)26744;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
