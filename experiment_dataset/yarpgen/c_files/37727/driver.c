#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2016455328;
long long int var_4 = -5213987630868073130LL;
long long int var_7 = 2031197995188360142LL;
unsigned char var_10 = (unsigned char)198;
short var_12 = (short)19140;
int zero = 0;
short var_13 = (short)29239;
short var_14 = (short)28643;
short var_15 = (short)20762;
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
