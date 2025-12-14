#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)45212;
unsigned short var_5 = (unsigned short)42019;
unsigned short var_9 = (unsigned short)2287;
unsigned short var_10 = (unsigned short)43291;
unsigned short var_15 = (unsigned short)23163;
int zero = 0;
unsigned short var_16 = (unsigned short)65534;
unsigned short var_17 = (unsigned short)64678;
unsigned short var_18 = (unsigned short)60159;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
