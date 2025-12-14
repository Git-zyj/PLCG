#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1915039708;
unsigned short var_5 = (unsigned short)755;
short var_6 = (short)-25049;
unsigned char var_12 = (unsigned char)51;
int zero = 0;
unsigned char var_16 = (unsigned char)214;
unsigned int var_17 = 710733064U;
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
