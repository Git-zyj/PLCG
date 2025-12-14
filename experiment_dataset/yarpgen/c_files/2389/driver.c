#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22734;
unsigned int var_4 = 233725712U;
_Bool var_5 = (_Bool)0;
short var_7 = (short)286;
unsigned char var_8 = (unsigned char)44;
int zero = 0;
unsigned long long int var_10 = 13843238748135781847ULL;
unsigned int var_11 = 3579306584U;
long long int var_12 = 66990342417851469LL;
unsigned long long int var_13 = 10869217641627972543ULL;
long long int var_14 = -8126308347034607705LL;
signed char var_15 = (signed char)-78;
_Bool var_16 = (_Bool)1;
long long int var_17 = -7566773687430900072LL;
int arr_0 [15] [15] ;
short arr_1 [15] ;
signed char arr_2 [15] ;
short arr_3 [15] ;
long long int arr_5 [19] ;
short arr_6 [19] ;
unsigned long long int arr_7 [12] ;
unsigned char arr_12 [13] ;
unsigned long long int arr_4 [15] [15] ;
long long int arr_11 [12] ;
unsigned int arr_15 [13] [13] ;
unsigned int arr_16 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 1189298754;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)31060;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)21415;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 5889330103137538432LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (short)24959;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 15849569667539437726ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 7032256424142723515ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = -6351649707717858774LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = 1091451666U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = 1183871422U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
