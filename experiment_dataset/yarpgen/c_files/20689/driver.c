#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61335;
unsigned long long int var_4 = 11209276131168855723ULL;
unsigned short var_8 = (unsigned short)44207;
int zero = 0;
unsigned short var_10 = (unsigned short)3744;
signed char var_11 = (signed char)72;
unsigned long long int var_12 = 1881341385291516068ULL;
short var_13 = (short)6765;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
