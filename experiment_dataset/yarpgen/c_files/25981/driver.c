#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27324;
short var_1 = (short)23081;
_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)63237;
unsigned short var_7 = (unsigned short)56192;
unsigned long long int var_8 = 2921289981652848009ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)71;
unsigned int var_12 = 2196421587U;
short var_13 = (short)-7399;
void init() {
}

void checksum() {
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
