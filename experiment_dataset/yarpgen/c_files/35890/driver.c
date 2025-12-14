#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6608;
short var_2 = (short)3421;
short var_5 = (short)-3306;
short var_10 = (short)-8026;
short var_12 = (short)10464;
int zero = 0;
short var_13 = (short)-19968;
short var_14 = (short)8962;
short var_15 = (short)2651;
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
