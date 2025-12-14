#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)224;
signed char var_6 = (signed char)22;
unsigned short var_9 = (unsigned short)64558;
signed char var_12 = (signed char)92;
int zero = 0;
long long int var_13 = -5438311766549464785LL;
int var_14 = 1897316397;
unsigned char var_15 = (unsigned char)230;
void init() {
}

void checksum() {
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
