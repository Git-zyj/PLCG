#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63618;
unsigned int var_2 = 1916533536U;
unsigned short var_3 = (unsigned short)11560;
unsigned char var_8 = (unsigned char)243;
short var_9 = (short)-15658;
unsigned short var_10 = (unsigned short)19367;
int zero = 0;
unsigned short var_11 = (unsigned short)56387;
unsigned int var_12 = 1145463638U;
unsigned int var_13 = 767249484U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
