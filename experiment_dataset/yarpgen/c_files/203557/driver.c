#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18602;
short var_2 = (short)1988;
short var_3 = (short)-28356;
short var_5 = (short)25613;
long long int var_8 = -3382481908176497561LL;
int zero = 0;
short var_10 = (short)-9602;
short var_11 = (short)-22895;
short var_12 = (short)-17354;
long long int var_13 = -8399869157999657783LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
