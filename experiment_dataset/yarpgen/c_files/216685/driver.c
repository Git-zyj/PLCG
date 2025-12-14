#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4269344281U;
unsigned long long int var_5 = 190946387297772421ULL;
signed char var_7 = (signed char)-98;
unsigned long long int var_8 = 890293604329120100ULL;
unsigned int var_9 = 4018542638U;
int zero = 0;
unsigned int var_12 = 2057816653U;
int var_13 = 1506607911;
int var_14 = 1599265179;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
