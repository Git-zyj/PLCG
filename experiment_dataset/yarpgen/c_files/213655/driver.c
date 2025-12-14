#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1502781050;
unsigned char var_2 = (unsigned char)157;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_13 = 7821602279319403325LL;
signed char var_14 = (signed char)79;
unsigned long long int var_15 = 7264496875452011367ULL;
unsigned short var_16 = (unsigned short)63073;
unsigned long long int var_17 = 13458021939207607374ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
