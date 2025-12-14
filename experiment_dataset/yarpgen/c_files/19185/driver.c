#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14768;
long long int var_2 = -4007224372029324269LL;
signed char var_3 = (signed char)-11;
unsigned char var_4 = (unsigned char)74;
short var_6 = (short)24559;
short var_7 = (short)-13260;
unsigned short var_11 = (unsigned short)12768;
short var_12 = (short)26424;
int zero = 0;
unsigned char var_13 = (unsigned char)53;
signed char var_14 = (signed char)-60;
short var_15 = (short)30168;
signed char var_16 = (signed char)-52;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
