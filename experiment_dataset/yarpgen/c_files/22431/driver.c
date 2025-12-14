#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16212496457176157566ULL;
int var_3 = 537380862;
unsigned short var_4 = (unsigned short)437;
unsigned char var_10 = (unsigned char)5;
unsigned char var_11 = (unsigned char)130;
int zero = 0;
int var_16 = 1983636957;
unsigned int var_17 = 3612954585U;
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
