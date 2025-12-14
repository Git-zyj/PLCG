#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)58279;
unsigned char var_3 = (unsigned char)148;
unsigned short var_6 = (unsigned short)44978;
signed char var_10 = (signed char)-27;
unsigned short var_11 = (unsigned short)2136;
unsigned short var_13 = (unsigned short)32717;
int zero = 0;
unsigned char var_14 = (unsigned char)162;
short var_15 = (short)-31662;
signed char var_16 = (signed char)17;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
