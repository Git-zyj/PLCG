#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1716529700U;
unsigned char var_6 = (unsigned char)178;
int var_12 = -491924480;
int zero = 0;
unsigned char var_13 = (unsigned char)112;
unsigned long long int var_14 = 15544400249159262852ULL;
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
