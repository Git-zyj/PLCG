#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21938;
unsigned long long int var_1 = 4448491734905063688ULL;
int var_2 = 2050839166;
unsigned short var_3 = (unsigned short)27159;
int var_7 = -1243672184;
unsigned char var_12 = (unsigned char)241;
int zero = 0;
int var_14 = 578614470;
short var_15 = (short)32328;
unsigned char var_16 = (unsigned char)171;
void init() {
}

void checksum() {
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
