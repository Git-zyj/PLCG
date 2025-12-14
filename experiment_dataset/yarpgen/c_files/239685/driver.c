#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -716328080;
unsigned long long int var_3 = 1847432160834697253ULL;
unsigned char var_4 = (unsigned char)54;
int zero = 0;
unsigned int var_12 = 3866731966U;
signed char var_13 = (signed char)39;
unsigned int var_14 = 859645872U;
short var_15 = (short)5623;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
