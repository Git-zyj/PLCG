#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26666;
unsigned short var_1 = (unsigned short)28230;
int var_2 = -550909078;
short var_3 = (short)23813;
unsigned int var_4 = 2407672552U;
short var_5 = (short)15053;
unsigned long long int var_6 = 2046972078309400025ULL;
unsigned char var_7 = (unsigned char)32;
unsigned short var_10 = (unsigned short)15437;
unsigned short var_11 = (unsigned short)27640;
unsigned short var_13 = (unsigned short)11875;
int zero = 0;
short var_16 = (short)22305;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-27978;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
