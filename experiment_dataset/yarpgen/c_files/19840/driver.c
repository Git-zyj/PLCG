#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)19019;
short var_4 = (short)24811;
short var_6 = (short)-4076;
short var_9 = (short)-13639;
short var_10 = (short)3578;
short var_11 = (short)21377;
short var_12 = (short)27034;
short var_13 = (short)-29606;
int zero = 0;
short var_15 = (short)29750;
short var_16 = (short)-29469;
short var_17 = (short)16492;
short var_18 = (short)-22529;
short var_19 = (short)17374;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
