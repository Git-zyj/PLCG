#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23576;
unsigned short var_3 = (unsigned short)6656;
int var_5 = 1455815798;
unsigned char var_6 = (unsigned char)96;
unsigned short var_7 = (unsigned short)19515;
unsigned char var_13 = (unsigned char)207;
int zero = 0;
signed char var_14 = (signed char)-29;
unsigned char var_15 = (unsigned char)186;
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
