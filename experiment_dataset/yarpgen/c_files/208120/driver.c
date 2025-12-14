#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)8227;
short var_7 = (short)-30055;
unsigned char var_8 = (unsigned char)232;
signed char var_9 = (signed char)2;
unsigned char var_10 = (unsigned char)206;
int zero = 0;
int var_13 = 82049958;
unsigned long long int var_14 = 9992543963626261825ULL;
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
