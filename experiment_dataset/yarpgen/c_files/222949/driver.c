#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)100;
unsigned int var_2 = 229434120U;
unsigned short var_3 = (unsigned short)18978;
unsigned short var_13 = (unsigned short)16817;
unsigned long long int var_14 = 8100291451926950552ULL;
int var_15 = -1290075697;
unsigned int var_16 = 44074987U;
long long int var_18 = -6014864553691511298LL;
int zero = 0;
signed char var_20 = (signed char)125;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-64;
short var_23 = (short)-6768;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
