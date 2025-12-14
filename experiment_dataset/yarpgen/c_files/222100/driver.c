#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)96;
unsigned long long int var_9 = 2127061677821275557ULL;
unsigned int var_10 = 1802165738U;
_Bool var_12 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)122;
unsigned short var_16 = (unsigned short)40275;
signed char var_17 = (signed char)113;
short var_18 = (short)-7676;
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
