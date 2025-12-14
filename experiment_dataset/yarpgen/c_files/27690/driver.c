#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)57980;
short var_5 = (short)-30597;
unsigned char var_6 = (unsigned char)45;
long long int var_7 = 5191894669785289822LL;
unsigned int var_8 = 4056646963U;
unsigned short var_13 = (unsigned short)24700;
int zero = 0;
long long int var_17 = -7775249019665124592LL;
signed char var_18 = (signed char)-42;
unsigned int var_19 = 4249522482U;
void init() {
}

void checksum() {
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
