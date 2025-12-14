#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_18 = (unsigned char)38;
int zero = 0;
short var_20 = (short)-7677;
unsigned char var_21 = (unsigned char)232;
unsigned long long int var_22 = 4016877894180142775ULL;
unsigned long long int var_23 = 16852194319614839153ULL;
unsigned char var_24 = (unsigned char)183;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
