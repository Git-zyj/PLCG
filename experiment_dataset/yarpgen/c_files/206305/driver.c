#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19587;
long long int var_4 = 265582071876448683LL;
short var_5 = (short)31076;
int var_7 = 1001258132;
unsigned char var_10 = (unsigned char)167;
int zero = 0;
unsigned char var_16 = (unsigned char)97;
unsigned short var_17 = (unsigned short)1413;
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
