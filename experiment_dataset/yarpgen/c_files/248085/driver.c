#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)21328;
unsigned short var_3 = (unsigned short)42437;
unsigned short var_7 = (unsigned short)6421;
int zero = 0;
unsigned short var_10 = (unsigned short)12785;
unsigned short var_11 = (unsigned short)30488;
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
