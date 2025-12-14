#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_12 = (signed char)50;
short var_13 = (short)-32400;
short var_15 = (short)8379;
int var_16 = -159512946;
int zero = 0;
long long int var_20 = 1228395777782292977LL;
signed char var_21 = (signed char)-96;
unsigned int var_22 = 1191599266U;
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
