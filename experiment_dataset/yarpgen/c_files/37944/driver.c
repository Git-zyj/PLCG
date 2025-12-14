#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-107;
unsigned short var_2 = (unsigned short)56228;
unsigned short var_6 = (unsigned short)22834;
unsigned short var_7 = (unsigned short)32167;
unsigned char var_8 = (unsigned char)171;
int zero = 0;
short var_10 = (short)15593;
unsigned long long int var_11 = 14728109573285178059ULL;
unsigned char var_12 = (unsigned char)55;
int var_13 = 1333386094;
unsigned char var_14 = (unsigned char)193;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
