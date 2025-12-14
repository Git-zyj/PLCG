#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)54;
unsigned short var_11 = (unsigned short)12697;
unsigned int var_14 = 2741196491U;
int zero = 0;
unsigned int var_18 = 1832543045U;
unsigned long long int var_19 = 1283084763297449048ULL;
unsigned long long int var_20 = 9306134535076661923ULL;
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
