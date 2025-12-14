#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8785331175719693236LL;
long long int var_4 = -3909145920234315627LL;
unsigned long long int var_6 = 5023372703317313305ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)34528;
short var_11 = (short)4725;
unsigned long long int var_12 = 11271472015725599809ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
