#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2969662834826185402LL;
unsigned long long int var_6 = 1717805531338537113ULL;
unsigned int var_7 = 1934373978U;
short var_11 = (short)-8673;
short var_12 = (short)-10991;
unsigned long long int var_16 = 14518605510530857688ULL;
short var_17 = (short)26264;
int zero = 0;
long long int var_18 = -3339673848609984590LL;
short var_19 = (short)31519;
unsigned int var_20 = 3578312397U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
