#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-25863;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 1824419307U;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_13 = (short)-22841;
long long int var_14 = -9155450130221307415LL;
unsigned long long int var_15 = 16124945159732162617ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
