#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58154;
unsigned short var_3 = (unsigned short)11572;
short var_5 = (short)-20215;
long long int var_6 = -5343133070139943394LL;
int var_9 = -752824335;
unsigned short var_11 = (unsigned short)41261;
unsigned int var_15 = 4049883968U;
int zero = 0;
unsigned short var_16 = (unsigned short)19902;
unsigned int var_17 = 805026103U;
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
