#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -822215556;
int var_2 = 1562530237;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1982755397U;
unsigned char var_8 = (unsigned char)20;
int zero = 0;
signed char var_11 = (signed char)10;
unsigned short var_12 = (unsigned short)16300;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
