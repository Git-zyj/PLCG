#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7612500645002442375ULL;
short var_1 = (short)12658;
signed char var_4 = (signed char)70;
short var_6 = (short)30419;
int var_15 = 1375723416;
int zero = 0;
int var_16 = -683921190;
unsigned int var_17 = 200933131U;
unsigned long long int var_18 = 9823965769887373057ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
