#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2107919050;
int var_1 = 1816056475;
short var_3 = (short)14697;
signed char var_4 = (signed char)119;
unsigned short var_7 = (unsigned short)1455;
unsigned int var_8 = 3275721438U;
int var_9 = 1792294803;
short var_10 = (short)-3969;
unsigned char var_13 = (unsigned char)159;
int zero = 0;
int var_15 = 2094516161;
unsigned char var_16 = (unsigned char)50;
short var_17 = (short)-16950;
unsigned short var_18 = (unsigned short)20718;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
