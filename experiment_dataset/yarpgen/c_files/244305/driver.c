#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)8;
short var_6 = (short)-23612;
unsigned int var_7 = 354894682U;
unsigned long long int var_10 = 13664325490378686836ULL;
signed char var_11 = (signed char)101;
int zero = 0;
int var_15 = -218296476;
unsigned long long int var_16 = 14074065048467474550ULL;
short var_17 = (short)15574;
void init() {
}

void checksum() {
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
