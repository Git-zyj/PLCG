#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)2329;
unsigned short var_8 = (unsigned short)49206;
unsigned short var_10 = (unsigned short)60923;
unsigned short var_11 = (unsigned short)13762;
int zero = 0;
unsigned short var_14 = (unsigned short)14342;
unsigned short var_15 = (unsigned short)20062;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
