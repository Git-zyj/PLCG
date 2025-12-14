#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55704;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)24182;
int zero = 0;
signed char var_12 = (signed char)12;
unsigned int var_13 = 3044959875U;
unsigned char var_14 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
