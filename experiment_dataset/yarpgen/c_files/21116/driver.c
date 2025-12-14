#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)242;
short var_6 = (short)-1671;
unsigned char var_8 = (unsigned char)84;
unsigned char var_9 = (unsigned char)207;
int zero = 0;
unsigned short var_16 = (unsigned short)15712;
short var_17 = (short)14552;
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
