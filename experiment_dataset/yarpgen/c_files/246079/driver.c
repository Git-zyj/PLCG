#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6931341167674249499LL;
unsigned int var_6 = 1303211557U;
long long int var_7 = 811748950520021731LL;
short var_9 = (short)-28733;
int zero = 0;
unsigned long long int var_10 = 11545921845516942123ULL;
int var_11 = -1337499643;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
