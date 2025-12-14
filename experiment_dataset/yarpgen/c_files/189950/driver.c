#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1488988555322299266LL;
unsigned int var_12 = 3258480237U;
int zero = 0;
long long int var_15 = 7603177860762940293LL;
unsigned int var_16 = 716231081U;
unsigned short var_17 = (unsigned short)13475;
void init() {
}

void checksum() {
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
