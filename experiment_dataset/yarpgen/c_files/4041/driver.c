#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
unsigned short var_3 = (unsigned short)30155;
unsigned short var_5 = (unsigned short)33805;
short var_6 = (short)-11621;
signed char var_8 = (signed char)113;
unsigned short var_11 = (unsigned short)25177;
int zero = 0;
signed char var_13 = (signed char)-60;
unsigned short var_14 = (unsigned short)50530;
short var_15 = (short)-27868;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
