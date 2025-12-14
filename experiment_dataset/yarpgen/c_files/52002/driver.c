#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2640122393U;
unsigned short var_4 = (unsigned short)58803;
_Bool var_5 = (_Bool)1;
unsigned char var_11 = (unsigned char)62;
int zero = 0;
unsigned char var_13 = (unsigned char)16;
signed char var_14 = (signed char)-124;
short var_15 = (short)-9288;
signed char var_16 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
