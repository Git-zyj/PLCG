#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)255;
unsigned char var_4 = (unsigned char)129;
unsigned short var_8 = (unsigned short)15070;
unsigned char var_11 = (unsigned char)31;
unsigned long long int var_17 = 13132535624027472842ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)7179;
unsigned short var_19 = (unsigned short)33729;
unsigned long long int var_20 = 8980713162349660901ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
