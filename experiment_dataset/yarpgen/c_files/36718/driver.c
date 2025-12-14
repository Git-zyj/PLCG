#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1755535103U;
_Bool var_9 = (_Bool)1;
unsigned int var_15 = 2872922538U;
int zero = 0;
unsigned int var_16 = 1120736811U;
unsigned long long int var_17 = 9957577108198610760ULL;
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
