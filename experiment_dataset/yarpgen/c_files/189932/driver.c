#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)48032;
unsigned long long int var_10 = 3855246525731906696ULL;
unsigned short var_11 = (unsigned short)25630;
long long int var_14 = 6482333497295560070LL;
int zero = 0;
short var_15 = (short)26404;
unsigned int var_16 = 2319624736U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
