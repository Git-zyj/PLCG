#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1525753159U;
unsigned int var_3 = 4105187636U;
short var_7 = (short)3155;
unsigned char var_12 = (unsigned char)196;
int zero = 0;
long long int var_14 = -2096485636573947784LL;
unsigned char var_15 = (unsigned char)168;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
