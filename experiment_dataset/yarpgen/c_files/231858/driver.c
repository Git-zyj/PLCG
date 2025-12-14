#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15598;
short var_4 = (short)30189;
short var_7 = (short)20715;
short var_8 = (short)5638;
short var_9 = (short)22802;
short var_10 = (short)-3477;
short var_12 = (short)-1098;
short var_13 = (short)-31347;
short var_15 = (short)18815;
int zero = 0;
short var_16 = (short)24078;
short var_17 = (short)6466;
void init() {
}

void checksum() {
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
