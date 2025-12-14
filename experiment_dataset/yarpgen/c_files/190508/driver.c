#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)125;
unsigned short var_4 = (unsigned short)40104;
unsigned int var_5 = 1895524829U;
unsigned char var_7 = (unsigned char)250;
signed char var_10 = (signed char)50;
int zero = 0;
unsigned char var_13 = (unsigned char)11;
signed char var_14 = (signed char)-53;
short var_15 = (short)-15292;
unsigned short var_16 = (unsigned short)56585;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
