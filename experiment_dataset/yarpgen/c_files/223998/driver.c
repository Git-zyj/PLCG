#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)106;
unsigned int var_2 = 2022593428U;
unsigned char var_3 = (unsigned char)74;
int var_6 = -999369934;
unsigned int var_8 = 4189802960U;
short var_10 = (short)4741;
unsigned char var_11 = (unsigned char)30;
unsigned short var_13 = (unsigned short)19032;
int zero = 0;
long long int var_14 = -460268357908273935LL;
int var_15 = 903458517;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
