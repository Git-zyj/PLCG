#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3809346933U;
unsigned short var_16 = (unsigned short)18692;
int var_18 = -1812381080;
int zero = 0;
signed char var_19 = (signed char)34;
unsigned short var_20 = (unsigned short)24959;
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
