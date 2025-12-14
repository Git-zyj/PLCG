#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2565;
short var_3 = (short)-26853;
signed char var_5 = (signed char)12;
signed char var_6 = (signed char)-1;
unsigned short var_11 = (unsigned short)8506;
signed char var_13 = (signed char)11;
int zero = 0;
short var_18 = (short)2084;
unsigned short var_19 = (unsigned short)18491;
unsigned char var_20 = (unsigned char)10;
short var_21 = (short)14471;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
