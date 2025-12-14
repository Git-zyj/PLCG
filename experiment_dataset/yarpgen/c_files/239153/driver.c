#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1383163839;
unsigned char var_6 = (unsigned char)122;
short var_14 = (short)-10379;
unsigned int var_15 = 2502497392U;
long long int var_16 = -4218936777251720723LL;
int zero = 0;
unsigned int var_19 = 722845892U;
unsigned char var_20 = (unsigned char)67;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
