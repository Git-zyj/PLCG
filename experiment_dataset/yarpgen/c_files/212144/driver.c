#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 368000894535977212LL;
long long int var_7 = -5152793363087567554LL;
long long int var_9 = -1378601198012254270LL;
long long int var_10 = -734914872025072351LL;
long long int var_11 = -6285457752501915432LL;
long long int var_13 = 7870702874540328748LL;
long long int var_14 = 8112635993990224057LL;
int zero = 0;
long long int var_15 = 3083272543108766873LL;
long long int var_16 = -4961843129523241476LL;
long long int var_17 = -7923413452637448479LL;
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
