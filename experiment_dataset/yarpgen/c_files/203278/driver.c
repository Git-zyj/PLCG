#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)192;
short var_1 = (short)14404;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)50996;
unsigned short var_7 = (unsigned short)36497;
unsigned short var_8 = (unsigned short)10958;
unsigned char var_13 = (unsigned char)126;
short var_14 = (short)-22923;
unsigned int var_18 = 1415432231U;
_Bool var_19 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2362599679U;
short var_22 = (short)12817;
short var_23 = (short)13620;
unsigned int var_24 = 170412283U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
