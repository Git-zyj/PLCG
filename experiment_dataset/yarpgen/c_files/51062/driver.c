#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -64516400;
int var_2 = -1894994493;
int var_3 = -300192296;
int var_4 = -513343171;
int var_6 = 307674664;
int var_7 = 1614912789;
int var_11 = 1471038093;
int var_13 = 322828744;
int var_14 = -406424296;
int var_15 = -170556604;
int var_16 = 1855599639;
int var_17 = 1811248708;
int var_18 = 2014446344;
int zero = 0;
int var_20 = 1972139479;
int var_21 = 143772390;
int var_22 = -29158886;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
