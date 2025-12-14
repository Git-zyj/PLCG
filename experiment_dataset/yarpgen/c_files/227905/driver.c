#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)215;
unsigned short var_2 = (unsigned short)28378;
unsigned int var_3 = 3017726470U;
unsigned short var_5 = (unsigned short)34945;
short var_6 = (short)24771;
unsigned char var_7 = (unsigned char)94;
int var_9 = 74697938;
unsigned long long int var_10 = 4662589394239002008ULL;
int var_12 = 1200438033;
int zero = 0;
short var_13 = (short)-14471;
unsigned short var_14 = (unsigned short)10389;
int var_15 = 682317558;
void init() {
}

void checksum() {
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
