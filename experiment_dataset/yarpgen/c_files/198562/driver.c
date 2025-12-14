#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -70222071;
int var_4 = -1768624962;
short var_9 = (short)3691;
int var_10 = 497559162;
int var_11 = -1771815594;
int var_12 = -197688506;
int var_13 = 1308219931;
int zero = 0;
short var_15 = (short)5284;
short var_16 = (short)-8040;
short var_17 = (short)3851;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
