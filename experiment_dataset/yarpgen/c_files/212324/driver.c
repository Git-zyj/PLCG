#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)16599;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
int var_7 = 915226282;
int var_8 = -1904784569;
unsigned long long int var_9 = 7288342602371349813ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)49466;
unsigned short var_11 = (unsigned short)53940;
unsigned long long int var_12 = 14821336720482938253ULL;
unsigned short var_13 = (unsigned short)60650;
unsigned short var_14 = (unsigned short)13477;
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
