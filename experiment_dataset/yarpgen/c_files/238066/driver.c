#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)54;
unsigned short var_11 = (unsigned short)11185;
int var_18 = 839565302;
int zero = 0;
unsigned char var_20 = (unsigned char)139;
unsigned long long int var_21 = 3547995363978033277ULL;
unsigned short var_22 = (unsigned short)24530;
unsigned int var_23 = 844775068U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
