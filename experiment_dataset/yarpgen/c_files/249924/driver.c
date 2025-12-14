#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -137106642995375688LL;
unsigned long long int var_11 = 15837593236295379104ULL;
signed char var_13 = (signed char)123;
unsigned short var_15 = (unsigned short)4871;
int zero = 0;
short var_16 = (short)5040;
signed char var_17 = (signed char)-78;
void init() {
}

void checksum() {
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
