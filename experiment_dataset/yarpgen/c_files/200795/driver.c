#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)18992;
signed char var_4 = (signed char)25;
unsigned char var_5 = (unsigned char)5;
unsigned short var_6 = (unsigned short)32915;
short var_11 = (short)1601;
unsigned int var_12 = 3304216275U;
int zero = 0;
unsigned int var_20 = 2399182333U;
unsigned short var_21 = (unsigned short)33951;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
