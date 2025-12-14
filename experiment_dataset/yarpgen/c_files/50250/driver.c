#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)6;
signed char var_10 = (signed char)2;
unsigned int var_11 = 61440872U;
unsigned int var_15 = 2075200980U;
long long int var_16 = -1981593213670854210LL;
int zero = 0;
unsigned int var_18 = 3898903239U;
long long int var_19 = -87861517540840220LL;
signed char var_20 = (signed char)75;
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
