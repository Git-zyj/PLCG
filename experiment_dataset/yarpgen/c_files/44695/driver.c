#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21996;
unsigned short var_6 = (unsigned short)19348;
unsigned long long int var_8 = 13530239266705974985ULL;
signed char var_9 = (signed char)-100;
int zero = 0;
unsigned int var_10 = 2683725419U;
unsigned int var_11 = 2428636941U;
int var_12 = 109050064;
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
