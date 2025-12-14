#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7394;
short var_2 = (short)-32542;
short var_4 = (short)-29369;
short var_6 = (short)-22297;
short var_7 = (short)11451;
short var_8 = (short)-17584;
short var_10 = (short)5319;
short var_11 = (short)-12105;
short var_12 = (short)29638;
int zero = 0;
short var_13 = (short)11471;
short var_14 = (short)18957;
short var_15 = (short)-19605;
short var_16 = (short)-4479;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
