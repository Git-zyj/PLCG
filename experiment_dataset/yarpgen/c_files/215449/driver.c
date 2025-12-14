#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10657041029604924287ULL;
int var_4 = -1022360067;
short var_7 = (short)-25924;
int var_11 = -949013140;
int zero = 0;
unsigned int var_13 = 900966224U;
signed char var_14 = (signed char)-53;
long long int var_15 = 8985012272716706264LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
