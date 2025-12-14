#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3085085534U;
short var_3 = (short)24013;
unsigned long long int var_4 = 10490695398059151604ULL;
unsigned int var_5 = 2694895467U;
long long int var_7 = -6493136115072914998LL;
int var_9 = 75946951;
int var_11 = 1132357321;
int zero = 0;
int var_12 = 1316493516;
unsigned short var_13 = (unsigned short)29674;
void init() {
}

void checksum() {
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
