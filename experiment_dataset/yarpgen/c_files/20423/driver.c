#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)83;
unsigned char var_1 = (unsigned char)43;
unsigned char var_2 = (unsigned char)160;
long long int var_10 = 1708205637323578362LL;
unsigned char var_12 = (unsigned char)219;
int zero = 0;
unsigned char var_13 = (unsigned char)86;
unsigned char var_14 = (unsigned char)246;
unsigned short var_15 = (unsigned short)20876;
unsigned char var_16 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
