#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)140;
unsigned char var_5 = (unsigned char)77;
unsigned char var_7 = (unsigned char)147;
unsigned char var_11 = (unsigned char)88;
unsigned short var_16 = (unsigned short)61792;
int zero = 0;
unsigned short var_19 = (unsigned short)37527;
short var_20 = (short)-15084;
signed char var_21 = (signed char)-13;
unsigned char var_22 = (unsigned char)111;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
