#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2448891261127725735LL;
long long int var_1 = -5743756979629759327LL;
long long int var_2 = -2281962871467049384LL;
int var_12 = 1762792169;
signed char var_14 = (signed char)59;
int zero = 0;
unsigned short var_15 = (unsigned short)33961;
unsigned char var_16 = (unsigned char)238;
void init() {
}

void checksum() {
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
