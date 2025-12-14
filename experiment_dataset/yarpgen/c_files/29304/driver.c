#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)60098;
unsigned char var_8 = (unsigned char)48;
short var_14 = (short)-11170;
short var_15 = (short)-28870;
unsigned char var_18 = (unsigned char)1;
int zero = 0;
short var_19 = (short)28374;
short var_20 = (short)-27930;
unsigned int var_21 = 3816080858U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
