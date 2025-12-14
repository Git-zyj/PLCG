#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2828393494U;
unsigned long long int var_7 = 15251310601063137437ULL;
signed char var_14 = (signed char)1;
int zero = 0;
unsigned long long int var_15 = 17734793664666480317ULL;
long long int var_16 = -3710709535226108142LL;
unsigned long long int var_17 = 1908447678250672313ULL;
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
