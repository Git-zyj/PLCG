#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17932796618785366393ULL;
unsigned long long int var_4 = 14364968236182543052ULL;
unsigned char var_5 = (unsigned char)3;
unsigned long long int var_6 = 8105385874523677364ULL;
unsigned char var_7 = (unsigned char)83;
signed char var_8 = (signed char)-63;
signed char var_9 = (signed char)-110;
unsigned char var_11 = (unsigned char)188;
signed char var_12 = (signed char)-83;
unsigned char var_13 = (unsigned char)248;
int zero = 0;
unsigned char var_15 = (unsigned char)112;
unsigned char var_16 = (unsigned char)250;
unsigned long long int var_17 = 15976170732884928363ULL;
signed char var_18 = (signed char)65;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
