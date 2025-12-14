#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1367570379;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)(-127 - 1);
int zero = 0;
int var_14 = -582301718;
short var_15 = (short)-64;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 4177334910U;
void init() {
}

void checksum() {
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
