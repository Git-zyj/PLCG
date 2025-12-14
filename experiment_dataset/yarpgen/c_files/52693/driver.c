#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
int var_2 = -115201739;
unsigned char var_4 = (unsigned char)20;
int var_5 = 286410435;
unsigned long long int var_7 = 3473766336436211538ULL;
unsigned long long int var_8 = 7490958854760334203ULL;
int zero = 0;
int var_10 = 206321149;
unsigned long long int var_11 = 11797510720010215232ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)36777;
unsigned char var_14 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
