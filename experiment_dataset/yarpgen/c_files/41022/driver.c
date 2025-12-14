#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41979;
signed char var_2 = (signed char)-122;
signed char var_5 = (signed char)-111;
signed char var_6 = (signed char)10;
unsigned char var_7 = (unsigned char)112;
int var_8 = -779338209;
unsigned short var_10 = (unsigned short)18502;
unsigned short var_11 = (unsigned short)22522;
int zero = 0;
int var_13 = 2145296403;
unsigned char var_14 = (unsigned char)43;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
