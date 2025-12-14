#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -553801497;
unsigned int var_11 = 2828380956U;
int zero = 0;
unsigned int var_12 = 274317930U;
unsigned short var_13 = (unsigned short)16709;
unsigned long long int var_14 = 1610247489733633820ULL;
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
