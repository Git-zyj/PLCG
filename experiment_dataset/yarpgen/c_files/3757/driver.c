#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19249;
unsigned char var_6 = (unsigned char)227;
unsigned short var_7 = (unsigned short)53145;
unsigned char var_9 = (unsigned char)110;
unsigned short var_13 = (unsigned short)17792;
signed char var_14 = (signed char)120;
unsigned char var_17 = (unsigned char)118;
int zero = 0;
unsigned char var_19 = (unsigned char)70;
unsigned char var_20 = (unsigned char)254;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
