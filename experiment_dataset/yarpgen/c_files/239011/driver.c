#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1578832475;
unsigned short var_3 = (unsigned short)62234;
unsigned char var_8 = (unsigned char)31;
unsigned char var_9 = (unsigned char)92;
int zero = 0;
unsigned long long int var_10 = 6601174307033745530ULL;
long long int var_11 = -8233727696643191900LL;
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
