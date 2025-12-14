#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)22;
int var_13 = 842234946;
int var_14 = 1710200345;
long long int var_15 = 8974631286213831348LL;
unsigned long long int var_16 = 18072101873935028775ULL;
int zero = 0;
signed char var_20 = (signed char)-7;
unsigned char var_21 = (unsigned char)231;
int var_22 = -1538808083;
long long int var_23 = -6135762788457051176LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
