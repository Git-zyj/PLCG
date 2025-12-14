#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7393280943596442578LL;
unsigned long long int var_1 = 1884346042099128805ULL;
long long int var_6 = -3534895368826310245LL;
short var_8 = (short)-9022;
long long int var_10 = 9130649760380594514LL;
unsigned char var_14 = (unsigned char)211;
int zero = 0;
unsigned long long int var_16 = 17186832331766507980ULL;
unsigned int var_17 = 2965913634U;
unsigned int var_18 = 2149421881U;
void init() {
}

void checksum() {
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
