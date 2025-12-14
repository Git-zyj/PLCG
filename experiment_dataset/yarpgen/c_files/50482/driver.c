#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2108394616;
short var_3 = (short)-15753;
int var_5 = 782802487;
short var_10 = (short)-2268;
int zero = 0;
unsigned char var_12 = (unsigned char)177;
short var_13 = (short)30993;
short var_14 = (short)-31442;
unsigned long long int var_15 = 10159668721781889361ULL;
unsigned int var_16 = 587777445U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
