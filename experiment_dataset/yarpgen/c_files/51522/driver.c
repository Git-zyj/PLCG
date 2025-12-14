#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14488629679908534443ULL;
unsigned long long int var_1 = 1497343727088774283ULL;
unsigned char var_3 = (unsigned char)71;
short var_4 = (short)-15939;
unsigned char var_5 = (unsigned char)233;
signed char var_6 = (signed char)67;
unsigned short var_8 = (unsigned short)28571;
int zero = 0;
unsigned short var_10 = (unsigned short)50865;
unsigned int var_11 = 3867026429U;
short var_12 = (short)6478;
unsigned short var_13 = (unsigned short)8851;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
