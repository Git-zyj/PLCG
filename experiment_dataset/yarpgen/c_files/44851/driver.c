#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17964;
long long int var_1 = 2897953199943914083LL;
unsigned int var_3 = 3204358079U;
unsigned short var_4 = (unsigned short)1247;
unsigned short var_5 = (unsigned short)41794;
int var_6 = -1383687328;
int var_7 = 274306651;
unsigned int var_8 = 619327281U;
unsigned short var_9 = (unsigned short)12834;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2642640544U;
int var_13 = 1227609487;
long long int var_15 = -4437286120396918256LL;
int zero = 0;
unsigned int var_16 = 1683314910U;
unsigned int var_17 = 1388483201U;
short var_18 = (short)-12048;
long long int var_19 = 1906582361930889575LL;
unsigned short var_20 = (unsigned short)54724;
short var_21 = (short)-12214;
unsigned char arr_0 [21] ;
_Bool arr_2 [21] ;
int arr_7 [20] ;
unsigned int arr_3 [21] ;
unsigned short arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = -1663688915;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 993929426U : 2722275534U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)10277 : (unsigned short)5258;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
