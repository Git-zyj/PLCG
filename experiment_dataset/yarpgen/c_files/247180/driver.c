#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-2;
unsigned short var_5 = (unsigned short)1363;
unsigned char var_14 = (unsigned char)111;
unsigned char var_17 = (unsigned char)7;
int zero = 0;
short var_18 = (short)-24397;
unsigned char var_19 = (unsigned char)2;
int var_20 = -485393585;
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
