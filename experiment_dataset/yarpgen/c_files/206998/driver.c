#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17667312880082988628ULL;
unsigned char var_5 = (unsigned char)155;
unsigned short var_8 = (unsigned short)14471;
unsigned int var_9 = 2493581168U;
short var_10 = (short)-29167;
short var_11 = (short)-1625;
int zero = 0;
short var_15 = (short)10619;
unsigned short var_16 = (unsigned short)60744;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
