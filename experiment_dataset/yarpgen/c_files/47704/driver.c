#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)114;
long long int var_7 = 1870107152458716915LL;
short var_11 = (short)-32360;
signed char var_14 = (signed char)21;
unsigned int var_19 = 2583897986U;
int zero = 0;
short var_20 = (short)16772;
short var_21 = (short)28762;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
