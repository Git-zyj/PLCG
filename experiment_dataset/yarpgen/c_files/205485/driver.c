#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16682460539049421686ULL;
unsigned int var_5 = 3454445230U;
unsigned long long int var_10 = 7614247361521844543ULL;
unsigned long long int var_11 = 14580650173038861762ULL;
int zero = 0;
unsigned long long int var_13 = 14364813481784438142ULL;
unsigned long long int var_14 = 5303500198545361455ULL;
unsigned short var_15 = (unsigned short)38869;
short var_16 = (short)-4073;
void init() {
}

void checksum() {
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
