#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)91;
unsigned char var_3 = (unsigned char)50;
short var_5 = (short)-25658;
unsigned short var_12 = (unsigned short)6133;
int zero = 0;
unsigned short var_13 = (unsigned short)42118;
unsigned char var_14 = (unsigned char)36;
void init() {
}

void checksum() {
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
