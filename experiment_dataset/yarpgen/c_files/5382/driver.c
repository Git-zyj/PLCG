#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12315;
unsigned short var_3 = (unsigned short)48601;
unsigned short var_11 = (unsigned short)29921;
unsigned short var_12 = (unsigned short)51348;
int zero = 0;
signed char var_16 = (signed char)-43;
signed char var_17 = (signed char)16;
unsigned short var_18 = (unsigned short)12251;
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
