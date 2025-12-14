#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1128020949;
int var_3 = -384560744;
long long int var_4 = -3945394011074201103LL;
unsigned char var_7 = (unsigned char)255;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-11716;
unsigned int var_14 = 598741855U;
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
