#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)20;
long long int var_5 = -1294109291483164274LL;
unsigned long long int var_6 = 2283724739935314622ULL;
long long int var_11 = 2336049998936432918LL;
long long int var_12 = -8882117003857969884LL;
unsigned int var_13 = 3476782890U;
int zero = 0;
short var_14 = (short)2366;
unsigned char var_15 = (unsigned char)71;
short var_16 = (short)-9522;
unsigned int var_17 = 2567042756U;
void init() {
}

void checksum() {
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
