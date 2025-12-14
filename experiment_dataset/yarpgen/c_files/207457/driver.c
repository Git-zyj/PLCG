#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1284921013U;
unsigned short var_12 = (unsigned short)53357;
unsigned char var_16 = (unsigned char)133;
int zero = 0;
unsigned short var_17 = (unsigned short)49961;
unsigned short var_18 = (unsigned short)58320;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
