#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)153;
unsigned char var_1 = (unsigned char)159;
short var_4 = (short)24598;
unsigned int var_8 = 2371297450U;
int zero = 0;
unsigned char var_10 = (unsigned char)169;
long long int var_11 = 2438055307514162271LL;
unsigned char var_12 = (unsigned char)122;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
