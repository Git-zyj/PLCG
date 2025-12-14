#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)255;
signed char var_2 = (signed char)-94;
unsigned short var_3 = (unsigned short)23375;
short var_5 = (short)3441;
unsigned long long int var_6 = 2388986513839986982ULL;
short var_15 = (short)-19554;
unsigned short var_18 = (unsigned short)63998;
int zero = 0;
int var_20 = -625610411;
unsigned char var_21 = (unsigned char)157;
void init() {
}

void checksum() {
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
