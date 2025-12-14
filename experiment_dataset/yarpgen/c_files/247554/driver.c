#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 391254792U;
int var_1 = -1548663015;
int var_6 = -177215273;
unsigned short var_7 = (unsigned short)64805;
int var_8 = 1623717672;
int var_11 = -303263296;
unsigned short var_12 = (unsigned short)54384;
signed char var_13 = (signed char)51;
short var_14 = (short)6605;
unsigned long long int var_16 = 6603691732893862399ULL;
unsigned char var_17 = (unsigned char)196;
int zero = 0;
unsigned char var_18 = (unsigned char)204;
int var_19 = 456264924;
unsigned char var_20 = (unsigned char)133;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
