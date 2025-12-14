#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6197673324362939647LL;
_Bool var_6 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3085388166U;
unsigned long long int var_17 = 7794906704750615339ULL;
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
