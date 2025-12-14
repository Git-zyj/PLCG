#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3472993906U;
signed char var_14 = (signed char)88;
unsigned char var_16 = (unsigned char)107;
int zero = 0;
long long int var_17 = 1875243899818799476LL;
signed char var_18 = (signed char)-100;
short var_19 = (short)32573;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
