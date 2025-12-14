#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)122;
short var_8 = (short)-15057;
unsigned short var_11 = (unsigned short)3754;
unsigned int var_14 = 3300614895U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 1420898682841616859ULL;
unsigned int var_19 = 1051954197U;
long long int var_20 = -1925355227735665676LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
