#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_7 = (short)-212;
unsigned short var_8 = (unsigned short)46628;
unsigned int var_13 = 1238493967U;
short var_15 = (short)1670;
int zero = 0;
unsigned char var_18 = (unsigned char)97;
unsigned long long int var_19 = 3350607968802742869ULL;
unsigned char var_20 = (unsigned char)45;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
