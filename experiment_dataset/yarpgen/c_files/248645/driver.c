#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)42072;
int var_4 = -944254249;
int var_7 = 1489966045;
unsigned short var_9 = (unsigned short)16880;
unsigned char var_12 = (unsigned char)105;
signed char var_15 = (signed char)74;
signed char var_16 = (signed char)17;
int zero = 0;
signed char var_17 = (signed char)-63;
unsigned char var_18 = (unsigned char)100;
void init() {
}

void checksum() {
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
