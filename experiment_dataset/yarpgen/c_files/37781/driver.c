#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1472391510U;
int var_7 = 231727548;
unsigned long long int var_8 = 9022435547383152677ULL;
unsigned int var_12 = 3380188234U;
unsigned long long int var_14 = 12130128571225503165ULL;
int zero = 0;
short var_16 = (short)16218;
unsigned long long int var_17 = 17123492018231450693ULL;
void init() {
}

void checksum() {
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
