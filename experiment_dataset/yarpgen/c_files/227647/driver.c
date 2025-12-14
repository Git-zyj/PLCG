#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 652409301;
unsigned int var_1 = 3419686629U;
unsigned short var_2 = (unsigned short)56486;
unsigned int var_4 = 1914314014U;
long long int var_5 = -9065297362755141707LL;
unsigned int var_6 = 212788861U;
int var_8 = -1483063404;
int var_9 = 1681015878;
signed char var_10 = (signed char)-9;
int zero = 0;
short var_11 = (short)-19673;
_Bool var_12 = (_Bool)0;
short var_13 = (short)24501;
unsigned char var_14 = (unsigned char)2;
int var_15 = 457179802;
unsigned int var_16 = 135416408U;
unsigned short var_17 = (unsigned short)48276;
int arr_2 [21] ;
short arr_5 [21] [21] ;
unsigned short arr_10 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -1664001587;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)16340 : (short)1621;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (unsigned short)46812;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
