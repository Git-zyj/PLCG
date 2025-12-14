#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)66;
int var_5 = 1639785274;
unsigned char var_6 = (unsigned char)8;
unsigned char var_10 = (unsigned char)244;
int var_11 = 2079083999;
int zero = 0;
int var_12 = -1965212050;
int var_13 = 1745911808;
unsigned int var_14 = 1725615895U;
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
