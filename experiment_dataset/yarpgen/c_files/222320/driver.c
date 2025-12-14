#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)44;
signed char var_3 = (signed char)-83;
short var_5 = (short)-1316;
signed char var_6 = (signed char)76;
unsigned char var_8 = (unsigned char)173;
unsigned short var_16 = (unsigned short)58562;
int zero = 0;
unsigned long long int var_17 = 4633156769780391858ULL;
unsigned int var_18 = 4071588158U;
void init() {
}

void checksum() {
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
