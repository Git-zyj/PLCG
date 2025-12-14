#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5666;
int var_1 = -191237270;
signed char var_3 = (signed char)-49;
unsigned short var_4 = (unsigned short)21557;
unsigned char var_5 = (unsigned char)96;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)0;
long long int var_11 = -5803348353330510784LL;
unsigned int var_12 = 1131600854U;
unsigned long long int var_13 = 335559713901589765ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 3789426964999086862ULL;
signed char var_16 = (signed char)18;
unsigned short var_17 = (unsigned short)54280;
unsigned char var_18 = (unsigned char)40;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)114;
signed char arr_0 [10] ;
unsigned long long int arr_6 [10] [10] [10] ;
unsigned short arr_7 [10] [10] [10] ;
int arr_12 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 9454404721161439223ULL : 11673653147280869675ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)50118;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? -397721307 : -486599054;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
