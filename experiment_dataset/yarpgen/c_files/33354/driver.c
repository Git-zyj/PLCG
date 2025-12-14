#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)49;
unsigned long long int var_3 = 4013663626647221270ULL;
unsigned char var_8 = (unsigned char)201;
unsigned char var_10 = (unsigned char)154;
unsigned long long int var_12 = 2185612865608763230ULL;
unsigned short var_15 = (unsigned short)35050;
unsigned char var_16 = (unsigned char)134;
unsigned char var_18 = (unsigned char)224;
int zero = 0;
signed char var_19 = (signed char)-88;
unsigned char var_20 = (unsigned char)142;
void init() {
}

void checksum() {
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
