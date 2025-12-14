#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13475;
short var_2 = (short)-9372;
short var_3 = (short)16433;
int var_7 = 1077120468;
int var_8 = -1395182894;
short var_9 = (short)-22379;
int zero = 0;
short var_12 = (short)-12699;
unsigned int var_13 = 2817699785U;
unsigned short var_14 = (unsigned short)45408;
int var_15 = -112315854;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
