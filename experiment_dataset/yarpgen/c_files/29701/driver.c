#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 686132148;
int var_4 = -1781106870;
unsigned short var_14 = (unsigned short)13937;
unsigned short var_18 = (unsigned short)32493;
int zero = 0;
unsigned char var_19 = (unsigned char)2;
unsigned int var_20 = 125734356U;
int var_21 = -565441030;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
