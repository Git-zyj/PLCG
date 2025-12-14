#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9073;
unsigned char var_3 = (unsigned char)220;
int var_4 = -1065395216;
unsigned short var_5 = (unsigned short)15843;
short var_10 = (short)-2794;
short var_11 = (short)-3878;
unsigned int var_17 = 1037444371U;
unsigned char var_18 = (unsigned char)235;
int zero = 0;
unsigned char var_19 = (unsigned char)148;
unsigned char var_20 = (unsigned char)170;
short var_21 = (short)-24571;
unsigned char var_22 = (unsigned char)202;
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
