#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1161;
unsigned long long int var_1 = 12029315987479416118ULL;
int var_11 = -1407062719;
unsigned char var_12 = (unsigned char)243;
int zero = 0;
unsigned long long int var_17 = 16170538614239528735ULL;
unsigned int var_18 = 1029536029U;
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
