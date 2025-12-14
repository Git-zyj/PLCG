#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)118;
short var_5 = (short)-27263;
unsigned short var_8 = (unsigned short)26563;
_Bool var_10 = (_Bool)0;
unsigned char var_14 = (unsigned char)140;
int zero = 0;
unsigned short var_15 = (unsigned short)43534;
unsigned char var_16 = (unsigned char)112;
unsigned char var_17 = (unsigned char)222;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
