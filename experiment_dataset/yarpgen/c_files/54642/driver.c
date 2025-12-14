#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33855;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)31855;
unsigned char var_7 = (unsigned char)216;
unsigned int var_8 = 1130528040U;
unsigned char var_10 = (unsigned char)91;
unsigned long long int var_12 = 817404575450713498ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)108;
int var_15 = 1785329714;
short var_16 = (short)-13730;
signed char var_17 = (signed char)-40;
unsigned int var_18 = 1680150721U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
