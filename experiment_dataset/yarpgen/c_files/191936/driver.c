#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -261186265;
int var_1 = 741356240;
int var_2 = -766729592;
int var_3 = -1448414285;
unsigned long long int var_4 = 15558055816988444348ULL;
int var_5 = -647350911;
int var_6 = 2016256889;
int var_8 = -1532951642;
int var_9 = -1899603592;
long long int var_11 = -1107153806298120991LL;
long long int var_12 = 7505565369252510063LL;
int zero = 0;
int var_14 = -766511486;
int var_15 = -1346562034;
int var_16 = 696283370;
int var_17 = 671826845;
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
