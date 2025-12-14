#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2439393822817393120ULL;
unsigned long long int var_2 = 1266469172546189880ULL;
unsigned long long int var_3 = 14771073417565650917ULL;
int zero = 0;
unsigned long long int var_10 = 2917874112625792509ULL;
unsigned long long int var_11 = 16536998522482506501ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
