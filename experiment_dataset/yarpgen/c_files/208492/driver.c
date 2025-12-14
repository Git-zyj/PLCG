#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1209745520378094924ULL;
signed char var_6 = (signed char)100;
long long int var_8 = -5293557765198041208LL;
int zero = 0;
unsigned long long int var_10 = 15762320304037335206ULL;
int var_11 = -173254165;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
