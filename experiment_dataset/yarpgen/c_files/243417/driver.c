#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26162;
short var_1 = (short)13996;
short var_3 = (short)-12960;
short var_4 = (short)20808;
short var_5 = (short)-7910;
short var_6 = (short)624;
short var_7 = (short)26642;
short var_8 = (short)-28317;
short var_9 = (short)24532;
short var_10 = (short)-30414;
int zero = 0;
short var_11 = (short)-32033;
short var_12 = (short)-28199;
short var_13 = (short)842;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
