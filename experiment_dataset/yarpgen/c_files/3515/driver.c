#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -1347708361;
unsigned short var_3 = (unsigned short)48940;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)36389;
signed char var_8 = (signed char)-61;
unsigned short var_9 = (unsigned short)53493;
signed char var_10 = (signed char)30;
int zero = 0;
int var_11 = 2069874999;
unsigned char var_12 = (unsigned char)205;
signed char var_13 = (signed char)-48;
unsigned char var_14 = (unsigned char)50;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
