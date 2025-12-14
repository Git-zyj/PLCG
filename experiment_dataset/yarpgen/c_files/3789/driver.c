#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-32;
int var_4 = 438824603;
unsigned long long int var_5 = 5284952197631405466ULL;
unsigned short var_6 = (unsigned short)43173;
signed char var_7 = (signed char)-104;
unsigned int var_8 = 3651381687U;
unsigned short var_10 = (unsigned short)41008;
unsigned short var_11 = (unsigned short)28581;
int zero = 0;
int var_12 = 1694548530;
unsigned char var_13 = (unsigned char)40;
unsigned char var_14 = (unsigned char)245;
int var_15 = 1484797881;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
