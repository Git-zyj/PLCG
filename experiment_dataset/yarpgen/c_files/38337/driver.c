#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10141;
short var_5 = (short)-19039;
short var_6 = (short)-24065;
short var_8 = (short)-9808;
unsigned int var_9 = 1089356722U;
unsigned int var_11 = 3335374056U;
int zero = 0;
short var_15 = (short)27598;
short var_16 = (short)-17254;
short var_17 = (short)-14772;
short var_18 = (short)-20440;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
