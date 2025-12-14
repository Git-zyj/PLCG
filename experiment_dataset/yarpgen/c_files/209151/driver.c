#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)244;
unsigned long long int var_4 = 5654121584384449290ULL;
int var_7 = 1094520400;
unsigned int var_8 = 1600314770U;
int var_9 = -1255587247;
unsigned short var_11 = (unsigned short)706;
int var_12 = 299266658;
int zero = 0;
unsigned long long int var_13 = 6152904895583491775ULL;
int var_14 = -1025429937;
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
