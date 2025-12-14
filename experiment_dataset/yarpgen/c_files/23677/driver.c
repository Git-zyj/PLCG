#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 686166518U;
unsigned int var_1 = 3723869688U;
long long int var_3 = 924700792121822992LL;
short var_5 = (short)-27330;
unsigned char var_6 = (unsigned char)118;
unsigned char var_9 = (unsigned char)222;
signed char var_10 = (signed char)49;
short var_14 = (short)-24046;
int zero = 0;
long long int var_19 = 9111489804955090736LL;
long long int var_20 = -8212958952412378750LL;
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
