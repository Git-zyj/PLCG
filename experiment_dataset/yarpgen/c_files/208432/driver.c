#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)77;
unsigned char var_2 = (unsigned char)103;
unsigned short var_10 = (unsigned short)22725;
unsigned short var_14 = (unsigned short)10644;
int zero = 0;
unsigned short var_15 = (unsigned short)42179;
unsigned char var_16 = (unsigned char)111;
short var_17 = (short)32336;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
