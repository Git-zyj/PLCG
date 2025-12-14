#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 6861314561546047032ULL;
signed char var_8 = (signed char)84;
unsigned long long int var_9 = 12272154082327847837ULL;
int zero = 0;
signed char var_16 = (signed char)-63;
long long int var_17 = 6194959367685571747LL;
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
