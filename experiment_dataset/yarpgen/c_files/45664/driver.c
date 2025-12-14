#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 5962476783198237064ULL;
unsigned long long int var_4 = 12400305066099327072ULL;
unsigned long long int var_11 = 13404919359178540531ULL;
unsigned int var_13 = 2530384435U;
unsigned int var_14 = 1910058613U;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 11991163526382263607ULL;
signed char var_17 = (signed char)69;
unsigned long long int var_18 = 16274381505716027755ULL;
short var_19 = (short)-19716;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
