#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28501;
int var_2 = -1551253898;
unsigned int var_6 = 1424956277U;
unsigned short var_10 = (unsigned short)7452;
int zero = 0;
short var_13 = (short)1393;
long long int var_14 = 4616245259649974981LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
