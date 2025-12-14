#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
short var_1 = (short)-27762;
long long int var_2 = -3506789229202851960LL;
short var_3 = (short)-24688;
signed char var_5 = (signed char)42;
unsigned short var_6 = (unsigned short)7364;
unsigned short var_9 = (unsigned short)43022;
signed char var_10 = (signed char)21;
int var_12 = -1137120063;
int zero = 0;
unsigned char var_13 = (unsigned char)105;
long long int var_14 = 7761393005671131650LL;
unsigned int var_15 = 2356422129U;
int var_16 = -1039445388;
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
