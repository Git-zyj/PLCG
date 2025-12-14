#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1317649411;
short var_1 = (short)7151;
long long int var_2 = -2204148458229632011LL;
unsigned char var_4 = (unsigned char)198;
unsigned short var_5 = (unsigned short)34735;
signed char var_11 = (signed char)8;
unsigned long long int var_12 = 14118390409243623835ULL;
unsigned short var_15 = (unsigned short)58205;
short var_17 = (short)-3237;
int zero = 0;
unsigned short var_19 = (unsigned short)7800;
long long int var_20 = -5629274370875653719LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
