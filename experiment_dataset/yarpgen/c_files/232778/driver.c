#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)201;
unsigned char var_4 = (unsigned char)107;
unsigned int var_8 = 4074225443U;
short var_12 = (short)-12960;
short var_13 = (short)-15298;
short var_16 = (short)-30595;
int zero = 0;
short var_17 = (short)27218;
unsigned long long int var_18 = 13954335303249359384ULL;
void init() {
}

void checksum() {
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
