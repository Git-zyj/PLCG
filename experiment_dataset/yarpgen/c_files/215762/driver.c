#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1055999240848699593LL;
long long int var_4 = -2830920216963297294LL;
short var_16 = (short)-30596;
int zero = 0;
short var_19 = (short)20754;
unsigned long long int var_20 = 15529097292616534205ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
