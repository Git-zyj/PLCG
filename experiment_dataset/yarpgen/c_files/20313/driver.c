#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14842875247481609823ULL;
unsigned short var_3 = (unsigned short)20826;
unsigned long long int var_4 = 2212837450388872512ULL;
int var_7 = -586440596;
int var_9 = -1848703957;
int var_10 = -354457013;
unsigned long long int var_11 = 2936688181053447971ULL;
int zero = 0;
unsigned long long int var_12 = 1881967579032035829ULL;
unsigned short var_13 = (unsigned short)30060;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
