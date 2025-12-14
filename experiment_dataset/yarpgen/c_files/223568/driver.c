#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9473341812005387290ULL;
unsigned long long int var_10 = 9616105947953368870ULL;
unsigned short var_12 = (unsigned short)19874;
int zero = 0;
unsigned int var_20 = 860382719U;
unsigned short var_21 = (unsigned short)12509;
int var_22 = 1075658639;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
