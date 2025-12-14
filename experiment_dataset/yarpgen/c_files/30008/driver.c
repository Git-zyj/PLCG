#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30463;
unsigned short var_3 = (unsigned short)16926;
unsigned short var_4 = (unsigned short)65027;
unsigned short var_9 = (unsigned short)42994;
int zero = 0;
unsigned char var_11 = (unsigned char)23;
unsigned short var_12 = (unsigned short)15118;
unsigned char var_13 = (unsigned char)248;
unsigned char var_14 = (unsigned char)122;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
