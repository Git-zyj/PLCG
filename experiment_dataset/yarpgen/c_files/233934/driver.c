#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1698975706U;
int var_8 = -942396659;
int var_12 = -1740047202;
unsigned long long int var_13 = 11390115237681632080ULL;
signed char var_17 = (signed char)113;
int zero = 0;
signed char var_20 = (signed char)100;
long long int var_21 = 7670913254811852933LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
