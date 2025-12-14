#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23513;
short var_2 = (short)-21738;
short var_6 = (short)16705;
short var_7 = (short)13004;
short var_8 = (short)23417;
short var_10 = (short)-18746;
short var_13 = (short)-6911;
short var_14 = (short)-17869;
short var_15 = (short)29105;
short var_16 = (short)28749;
int zero = 0;
short var_18 = (short)-6573;
short var_19 = (short)-20403;
short var_20 = (short)14727;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
