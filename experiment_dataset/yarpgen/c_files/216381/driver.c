#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)246;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 4116512174U;
unsigned char var_10 = (unsigned char)33;
int var_12 = 1916953096;
signed char var_13 = (signed char)122;
int zero = 0;
signed char var_14 = (signed char)-29;
signed char var_15 = (signed char)24;
void init() {
}

void checksum() {
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
