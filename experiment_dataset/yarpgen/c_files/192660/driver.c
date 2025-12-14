#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 14154484272021714375ULL;
unsigned char var_8 = (unsigned char)90;
int var_9 = -1826067103;
int zero = 0;
unsigned short var_10 = (unsigned short)24247;
signed char var_11 = (signed char)4;
signed char var_12 = (signed char)41;
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
