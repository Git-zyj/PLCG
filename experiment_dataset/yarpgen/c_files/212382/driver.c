#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12271;
short var_2 = (short)-29911;
short var_8 = (short)27522;
short var_10 = (short)22928;
short var_14 = (short)-4636;
short var_15 = (short)-29562;
short var_17 = (short)-19717;
short var_18 = (short)-888;
int zero = 0;
short var_20 = (short)29336;
short var_21 = (short)-15540;
short var_22 = (short)8769;
short var_23 = (short)-12727;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
