#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2037851765;
unsigned short var_2 = (unsigned short)29928;
unsigned char var_8 = (unsigned char)144;
int zero = 0;
unsigned char var_12 = (unsigned char)124;
long long int var_13 = 5205672038978898471LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
