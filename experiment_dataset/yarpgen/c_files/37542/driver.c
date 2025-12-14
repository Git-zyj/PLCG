#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8668;
unsigned short var_6 = (unsigned short)58607;
unsigned long long int var_7 = 12172252369381337981ULL;
int var_11 = -673304382;
int zero = 0;
unsigned int var_17 = 1890849133U;
unsigned char var_18 = (unsigned char)172;
void init() {
}

void checksum() {
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
