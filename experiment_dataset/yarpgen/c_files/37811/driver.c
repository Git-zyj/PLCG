#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)23483;
short var_6 = (short)28207;
long long int var_7 = 6558691361579441865LL;
unsigned int var_9 = 2318808789U;
unsigned char var_11 = (unsigned char)97;
int zero = 0;
unsigned char var_16 = (unsigned char)248;
int var_17 = 604508224;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
