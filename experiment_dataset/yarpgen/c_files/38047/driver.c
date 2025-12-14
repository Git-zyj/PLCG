#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3832123482U;
short var_4 = (short)-22836;
int var_5 = -1990928330;
unsigned char var_6 = (unsigned char)93;
unsigned int var_10 = 2477658158U;
unsigned char var_11 = (unsigned char)65;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)21808;
signed char var_15 = (signed char)-34;
unsigned short var_16 = (unsigned short)56021;
short var_17 = (short)16956;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
