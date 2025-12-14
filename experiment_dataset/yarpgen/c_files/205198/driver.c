#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27215;
unsigned short var_3 = (unsigned short)23909;
unsigned long long int var_4 = 13656185506655677815ULL;
unsigned long long int var_5 = 2214280292350148575ULL;
unsigned short var_11 = (unsigned short)30237;
unsigned char var_16 = (unsigned char)114;
int zero = 0;
long long int var_17 = -7393110891375422214LL;
unsigned short var_18 = (unsigned short)60684;
void init() {
}

void checksum() {
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
