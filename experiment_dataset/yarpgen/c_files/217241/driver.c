#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2684;
int var_4 = 1727382078;
unsigned short var_6 = (unsigned short)31302;
unsigned int var_8 = 2398856957U;
int zero = 0;
unsigned short var_10 = (unsigned short)54969;
unsigned short var_11 = (unsigned short)23723;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
