#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -262481852;
short var_11 = (short)-19898;
int zero = 0;
int var_13 = 322109801;
unsigned long long int var_14 = 12606475967709578620ULL;
long long int var_15 = -2090300571166126197LL;
unsigned long long int var_16 = 1946171202247604609ULL;
unsigned short var_17 = (unsigned short)36699;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
