#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5107027571061036515ULL;
unsigned int var_5 = 1712407003U;
unsigned int var_8 = 2458238633U;
unsigned int var_10 = 496293395U;
unsigned long long int var_11 = 8677599033103550996ULL;
unsigned int var_12 = 1609660856U;
int zero = 0;
unsigned long long int var_13 = 5990953693936225513ULL;
unsigned int var_14 = 1282498511U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
