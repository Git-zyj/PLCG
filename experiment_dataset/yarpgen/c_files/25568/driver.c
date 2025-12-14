#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17596965325205705471ULL;
unsigned short var_5 = (unsigned short)27774;
unsigned long long int var_11 = 9625375555465141882ULL;
unsigned char var_14 = (unsigned char)161;
int zero = 0;
int var_20 = -1023814593;
unsigned short var_21 = (unsigned short)32777;
int var_22 = -2016148922;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
