#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_12 = -1935135172;
long long int var_15 = 3750323554172121810LL;
int zero = 0;
unsigned int var_16 = 4060961468U;
long long int var_17 = 4791720126799216472LL;
unsigned char var_18 = (unsigned char)142;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
