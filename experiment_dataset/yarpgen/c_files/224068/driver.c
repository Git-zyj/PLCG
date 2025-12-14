#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 380044561U;
unsigned char var_5 = (unsigned char)14;
unsigned int var_11 = 1584346009U;
int zero = 0;
signed char var_20 = (signed char)-4;
unsigned char var_21 = (unsigned char)2;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
