#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2631;
signed char var_3 = (signed char)3;
signed char var_4 = (signed char)8;
signed char var_5 = (signed char)64;
int var_6 = 588224976;
unsigned char var_7 = (unsigned char)108;
unsigned short var_8 = (unsigned short)64233;
int zero = 0;
unsigned short var_10 = (unsigned short)33452;
signed char var_11 = (signed char)-89;
signed char var_12 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
