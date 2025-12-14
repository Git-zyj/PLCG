#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15092;
unsigned char var_3 = (unsigned char)93;
unsigned long long int var_4 = 9666761082799100500ULL;
unsigned char var_5 = (unsigned char)194;
unsigned char var_8 = (unsigned char)229;
unsigned char var_10 = (unsigned char)173;
unsigned long long int var_11 = 16856567187853377371ULL;
int zero = 0;
unsigned long long int var_16 = 10724934161196078704ULL;
unsigned char var_17 = (unsigned char)45;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
