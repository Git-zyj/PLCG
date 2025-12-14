#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12543;
short var_5 = (short)-11997;
short var_8 = (short)-7804;
short var_9 = (short)-22435;
short var_10 = (short)-17679;
short var_12 = (short)-20487;
short var_15 = (short)-19840;
short var_17 = (short)14624;
short var_18 = (short)16391;
int zero = 0;
short var_20 = (short)13356;
short var_21 = (short)2034;
short var_22 = (short)14910;
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
