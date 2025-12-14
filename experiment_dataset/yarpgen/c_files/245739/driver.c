#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 733036630U;
unsigned char var_12 = (unsigned char)19;
int zero = 0;
unsigned char var_20 = (unsigned char)56;
signed char var_21 = (signed char)-98;
unsigned long long int var_22 = 2070009384127824290ULL;
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
