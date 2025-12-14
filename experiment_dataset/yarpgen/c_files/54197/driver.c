#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 677975032U;
unsigned char var_12 = (unsigned char)144;
unsigned char var_15 = (unsigned char)206;
int zero = 0;
int var_19 = -1725479877;
long long int var_20 = -5814528624741946728LL;
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
