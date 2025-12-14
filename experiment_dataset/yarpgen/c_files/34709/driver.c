#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)168;
long long int var_2 = -7102317852220388782LL;
unsigned long long int var_4 = 18258399827968125583ULL;
unsigned short var_6 = (unsigned short)27428;
int zero = 0;
unsigned long long int var_10 = 3043668427987912932ULL;
unsigned int var_11 = 2715928803U;
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
