#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)224;
unsigned int var_5 = 3301850488U;
unsigned short var_7 = (unsigned short)19303;
unsigned char var_15 = (unsigned char)180;
int zero = 0;
unsigned char var_16 = (unsigned char)184;
unsigned short var_17 = (unsigned short)14453;
unsigned short var_18 = (unsigned short)12572;
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
