#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)119;
unsigned char var_1 = (unsigned char)34;
unsigned short var_4 = (unsigned short)53157;
unsigned short var_8 = (unsigned short)42654;
unsigned char var_9 = (unsigned char)206;
unsigned char var_10 = (unsigned char)123;
unsigned int var_12 = 1522937015U;
unsigned int var_13 = 1591447567U;
unsigned int var_14 = 4042399701U;
int zero = 0;
unsigned short var_16 = (unsigned short)32578;
unsigned char var_17 = (unsigned char)124;
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
