#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1418255739;
unsigned char var_4 = (unsigned char)19;
int var_8 = 1459562664;
int zero = 0;
int var_14 = 1836868959;
signed char var_15 = (signed char)110;
long long int var_16 = -7281549795638479315LL;
unsigned long long int var_17 = 15566538189750007594ULL;
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
