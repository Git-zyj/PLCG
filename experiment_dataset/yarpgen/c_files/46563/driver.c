#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65192;
int var_1 = -2109895677;
unsigned int var_2 = 4218477069U;
short var_3 = (short)-27540;
unsigned int var_4 = 2577326208U;
int var_5 = -894679506;
signed char var_6 = (signed char)109;
short var_7 = (short)-6015;
unsigned int var_9 = 3588536896U;
unsigned short var_11 = (unsigned short)29054;
int zero = 0;
unsigned int var_12 = 1699366479U;
short var_13 = (short)-10490;
unsigned char var_14 = (unsigned char)50;
unsigned char var_15 = (unsigned char)208;
long long int var_16 = 1630795736297036769LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
