#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3371415077U;
unsigned short var_7 = (unsigned short)16142;
unsigned int var_8 = 481031944U;
int zero = 0;
unsigned short var_12 = (unsigned short)5692;
short var_13 = (short)-10428;
unsigned char var_14 = (unsigned char)106;
void init() {
}

void checksum() {
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
