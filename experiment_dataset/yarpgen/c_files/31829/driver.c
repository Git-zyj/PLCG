#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)113;
signed char var_10 = (signed char)-52;
unsigned short var_13 = (unsigned short)24349;
unsigned short var_14 = (unsigned short)2874;
unsigned short var_15 = (unsigned short)42378;
int zero = 0;
short var_19 = (short)24512;
unsigned short var_20 = (unsigned short)29390;
int var_21 = -1271628493;
short var_22 = (short)-14606;
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
