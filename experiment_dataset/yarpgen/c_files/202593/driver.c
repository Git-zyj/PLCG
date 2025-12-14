#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)6391;
unsigned int var_4 = 2193859935U;
short var_7 = (short)-9298;
unsigned long long int var_9 = 2824097117400748473ULL;
short var_12 = (short)24080;
unsigned short var_14 = (unsigned short)12392;
int zero = 0;
signed char var_15 = (signed char)-104;
unsigned long long int var_16 = 17501376881576273389ULL;
void init() {
}

void checksum() {
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
