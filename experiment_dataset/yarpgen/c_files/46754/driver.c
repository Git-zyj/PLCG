#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32453;
int var_1 = -511766151;
long long int var_2 = -1472024348852734710LL;
unsigned long long int var_4 = 17074084575388571102ULL;
unsigned long long int var_6 = 5023088797911340761ULL;
unsigned int var_8 = 3063084435U;
unsigned short var_14 = (unsigned short)24914;
signed char var_15 = (signed char)-122;
int zero = 0;
int var_16 = -1493295012;
long long int var_17 = -4288228889153506377LL;
unsigned int var_18 = 2271337015U;
unsigned int var_19 = 1607234829U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
