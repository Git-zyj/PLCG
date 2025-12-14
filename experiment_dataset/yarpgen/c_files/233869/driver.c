#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1039382449U;
unsigned char var_3 = (unsigned char)60;
unsigned char var_4 = (unsigned char)114;
signed char var_5 = (signed char)-63;
unsigned short var_7 = (unsigned short)54516;
short var_8 = (short)-16714;
unsigned char var_11 = (unsigned char)233;
unsigned short var_12 = (unsigned short)37240;
int zero = 0;
short var_15 = (short)-6365;
unsigned long long int var_16 = 1902428831658173897ULL;
unsigned int var_17 = 2939708988U;
unsigned short var_18 = (unsigned short)10987;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
