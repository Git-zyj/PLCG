#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 160843661270971629ULL;
long long int var_6 = -2896420503379118986LL;
unsigned long long int var_8 = 1450372375949502980ULL;
int var_12 = 953304540;
int zero = 0;
unsigned int var_14 = 3108982851U;
short var_15 = (short)12777;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
