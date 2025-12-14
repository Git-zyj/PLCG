#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7333476440998929541ULL;
long long int var_3 = -5773678073813515757LL;
long long int var_7 = 4455014223863656082LL;
int zero = 0;
signed char var_12 = (signed char)99;
unsigned short var_13 = (unsigned short)1919;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
