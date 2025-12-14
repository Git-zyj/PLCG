#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)12;
unsigned short var_1 = (unsigned short)44841;
int var_9 = 1063447769;
short var_11 = (short)7281;
int zero = 0;
unsigned int var_14 = 2590614774U;
signed char var_15 = (signed char)79;
long long int var_16 = -1792831646831405460LL;
unsigned short var_17 = (unsigned short)1358;
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
