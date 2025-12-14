#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-22427;
int var_13 = 2146541676;
unsigned long long int var_16 = 16355332415182162997ULL;
int zero = 0;
long long int var_17 = 3325017387917869857LL;
short var_18 = (short)16085;
long long int var_19 = 2293830761156787005LL;
void init() {
}

void checksum() {
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
