#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2094180316783546886ULL;
_Bool var_1 = (_Bool)0;
unsigned short var_6 = (unsigned short)26646;
unsigned long long int var_8 = 983541758608013976ULL;
unsigned short var_10 = (unsigned short)62359;
unsigned short var_12 = (unsigned short)56927;
_Bool var_13 = (_Bool)1;
unsigned short var_17 = (unsigned short)34151;
int zero = 0;
unsigned char var_18 = (unsigned char)155;
unsigned long long int var_19 = 7476369578685871295ULL;
void init() {
}

void checksum() {
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
