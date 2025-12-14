#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 18088861287778617818ULL;
unsigned char var_9 = (unsigned char)235;
int var_16 = -353894039;
signed char var_17 = (signed char)30;
int zero = 0;
unsigned int var_20 = 882060836U;
short var_21 = (short)29724;
int var_22 = 146374847;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
