#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)2;
unsigned short var_3 = (unsigned short)14612;
unsigned int var_9 = 740343715U;
int var_12 = -839028833;
int zero = 0;
unsigned int var_13 = 1585212286U;
unsigned long long int var_14 = 12389820362091598969ULL;
void init() {
}

void checksum() {
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
