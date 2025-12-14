#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23967;
int var_2 = 2091175602;
int var_3 = -932269840;
unsigned long long int var_5 = 1802484028558153295ULL;
unsigned int var_9 = 3284605855U;
int zero = 0;
unsigned short var_10 = (unsigned short)5595;
unsigned char var_11 = (unsigned char)217;
long long int var_12 = -2853427375538147301LL;
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
