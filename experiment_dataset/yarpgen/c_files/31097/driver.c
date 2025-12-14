#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1175170187;
unsigned long long int var_4 = 8827826406027710851ULL;
unsigned char var_11 = (unsigned char)56;
int zero = 0;
int var_12 = -236349598;
unsigned char var_13 = (unsigned char)215;
long long int var_14 = 6915611079389332531LL;
long long int var_15 = 512272232279218126LL;
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
