#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7527126276160569754LL;
int var_7 = -440215925;
unsigned long long int var_9 = 11761219539599574380ULL;
short var_10 = (short)-10296;
unsigned short var_11 = (unsigned short)64126;
unsigned short var_12 = (unsigned short)38805;
int zero = 0;
int var_15 = -1697176438;
int var_16 = -1748277951;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
