#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 468798619U;
unsigned char var_2 = (unsigned char)89;
unsigned short var_3 = (unsigned short)32869;
int var_4 = 1269344200;
unsigned short var_5 = (unsigned short)7218;
short var_8 = (short)-21674;
short var_10 = (short)-16639;
short var_11 = (short)-6521;
signed char var_12 = (signed char)-9;
signed char var_13 = (signed char)72;
signed char var_14 = (signed char)-100;
int var_15 = -630420537;
int var_16 = -1441260541;
unsigned short var_17 = (unsigned short)40715;
int zero = 0;
unsigned char var_18 = (unsigned char)192;
int var_19 = 1919946022;
long long int var_20 = 6401131379687271729LL;
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
