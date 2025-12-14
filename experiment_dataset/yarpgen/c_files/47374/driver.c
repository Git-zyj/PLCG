#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8234989362579035550LL;
long long int var_3 = -7789599797516008916LL;
long long int var_4 = 1716310630636396275LL;
long long int var_5 = 7640496150430742758LL;
long long int var_7 = -6116222323978919726LL;
long long int var_11 = 6865378425899415863LL;
long long int var_13 = -1966928547457831096LL;
int zero = 0;
long long int var_15 = 5218081120890326070LL;
long long int var_16 = 3415901891128074852LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
