#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-13359;
short var_3 = (short)-24218;
long long int var_4 = 1603973966380350562LL;
long long int var_10 = -8307064785595794354LL;
short var_12 = (short)27388;
int zero = 0;
long long int var_15 = -3245745521613201558LL;
long long int var_16 = -6293633683383567118LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
