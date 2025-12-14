#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)8959;
short var_5 = (short)-20657;
short var_6 = (short)-31833;
unsigned long long int var_7 = 12219077959897613628ULL;
unsigned long long int var_10 = 12837243517841359977ULL;
unsigned long long int var_12 = 10038227973089661045ULL;
int zero = 0;
short var_13 = (short)25106;
short var_14 = (short)-18166;
short var_15 = (short)13125;
unsigned long long int var_16 = 1236244500668648507ULL;
short var_17 = (short)30883;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
