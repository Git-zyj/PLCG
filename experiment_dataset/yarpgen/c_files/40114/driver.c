#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5761230346774403415ULL;
short var_5 = (short)-31220;
signed char var_7 = (signed char)-63;
int var_10 = 538160379;
int zero = 0;
signed char var_14 = (signed char)63;
_Bool var_15 = (_Bool)0;
short var_16 = (short)25442;
short var_17 = (short)-23323;
unsigned long long int var_18 = 9568082530004844790ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
