#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)228;
unsigned char var_7 = (unsigned char)66;
int zero = 0;
unsigned int var_10 = 3000711154U;
short var_11 = (short)-21140;
unsigned short var_12 = (unsigned short)41087;
signed char var_13 = (signed char)8;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
