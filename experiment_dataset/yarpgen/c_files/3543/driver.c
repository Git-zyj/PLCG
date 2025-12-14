#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29005;
short var_2 = (short)-30823;
short var_4 = (short)13030;
short var_5 = (short)-10186;
int var_7 = -692427298;
short var_9 = (short)4582;
int var_12 = -1433482870;
int zero = 0;
short var_13 = (short)7077;
int var_14 = -1110053461;
int var_15 = -691737313;
void init() {
}

void checksum() {
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
