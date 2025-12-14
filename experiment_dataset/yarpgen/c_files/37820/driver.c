#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-61;
short var_8 = (short)11504;
unsigned long long int var_9 = 13968856896577915349ULL;
unsigned int var_10 = 2097738141U;
unsigned short var_13 = (unsigned short)34865;
unsigned char var_14 = (unsigned char)16;
int zero = 0;
short var_16 = (short)-3532;
short var_17 = (short)16375;
unsigned char var_18 = (unsigned char)185;
unsigned long long int var_19 = 11597033523831572801ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
