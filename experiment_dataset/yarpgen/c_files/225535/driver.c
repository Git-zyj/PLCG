#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -385399540;
long long int var_1 = 7219098885545700283LL;
int var_2 = 1508770024;
unsigned short var_3 = (unsigned short)17301;
long long int var_4 = 3109847046166102357LL;
short var_5 = (short)12033;
signed char var_9 = (signed char)-81;
int zero = 0;
int var_11 = -138252729;
short var_12 = (short)27061;
short var_13 = (short)12495;
long long int var_14 = -7955256675531323226LL;
unsigned char var_15 = (unsigned char)169;
unsigned short var_16 = (unsigned short)59341;
long long int arr_1 [18] [18] ;
unsigned short arr_6 [18] [18] [18] ;
unsigned char arr_7 [22] [22] ;
short arr_8 [22] ;
int arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = -1444299462970605032LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)52283;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (short)-3683;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1946043553 : -1740954729;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
