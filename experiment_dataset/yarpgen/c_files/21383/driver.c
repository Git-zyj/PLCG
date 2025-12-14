#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 623798470;
long long int var_1 = 5771370380643901822LL;
unsigned char var_2 = (unsigned char)57;
unsigned short var_10 = (unsigned short)65456;
unsigned char var_11 = (unsigned char)11;
unsigned short var_13 = (unsigned short)22122;
unsigned short var_14 = (unsigned short)60269;
int var_18 = -2074965326;
int zero = 0;
short var_19 = (short)-31656;
unsigned char var_20 = (unsigned char)205;
unsigned short var_21 = (unsigned short)52523;
void init() {
}

void checksum() {
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
