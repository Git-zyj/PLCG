#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)58;
unsigned int var_8 = 1214943013U;
unsigned char var_10 = (unsigned char)113;
int zero = 0;
unsigned int var_12 = 3399198500U;
unsigned short var_13 = (unsigned short)56806;
signed char var_14 = (signed char)113;
long long int var_15 = 9148324616756664361LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
