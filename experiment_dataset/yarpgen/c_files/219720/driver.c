#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)2335;
unsigned short var_6 = (unsigned short)36046;
int var_8 = -1841461938;
unsigned short var_10 = (unsigned short)19620;
unsigned short var_11 = (unsigned short)41715;
int zero = 0;
unsigned short var_12 = (unsigned short)47294;
signed char var_13 = (signed char)-123;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
