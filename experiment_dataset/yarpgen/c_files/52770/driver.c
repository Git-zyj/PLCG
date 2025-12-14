#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-20020;
int var_4 = -175846573;
unsigned long long int var_5 = 11795037993015587413ULL;
short var_10 = (short)-11158;
unsigned int var_13 = 3125486688U;
int zero = 0;
long long int var_16 = 4725754301113281783LL;
unsigned int var_17 = 1874860226U;
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
