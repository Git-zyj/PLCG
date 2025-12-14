#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)99;
unsigned short var_1 = (unsigned short)17543;
unsigned short var_3 = (unsigned short)20516;
unsigned short var_5 = (unsigned short)54656;
int var_6 = -2093523042;
unsigned int var_7 = 677734386U;
unsigned int var_8 = 1610909393U;
unsigned short var_10 = (unsigned short)23383;
int zero = 0;
unsigned char var_12 = (unsigned char)122;
unsigned short var_13 = (unsigned short)14451;
unsigned char var_14 = (unsigned char)219;
void init() {
}

void checksum() {
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
