#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)2880;
unsigned char var_6 = (unsigned char)117;
unsigned char var_12 = (unsigned char)32;
signed char var_13 = (signed char)-24;
int zero = 0;
short var_14 = (short)24123;
unsigned int var_15 = 212544299U;
unsigned short var_16 = (unsigned short)10728;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
