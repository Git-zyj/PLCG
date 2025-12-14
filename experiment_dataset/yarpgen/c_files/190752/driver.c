#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)8;
signed char var_2 = (signed char)114;
unsigned int var_4 = 592915353U;
unsigned long long int var_6 = 11369842049873515742ULL;
signed char var_8 = (signed char)41;
short var_10 = (short)-25884;
unsigned long long int var_11 = 446720655613889817ULL;
signed char var_12 = (signed char)92;
long long int var_13 = 7826526442237238592LL;
signed char var_15 = (signed char)86;
int zero = 0;
unsigned long long int var_20 = 418715141509018147ULL;
unsigned int var_21 = 990886614U;
unsigned int var_22 = 215806718U;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)23;
unsigned short var_26 = (unsigned short)18875;
unsigned long long int var_27 = 17981743589742584391ULL;
int var_28 = 1968680255;
_Bool var_29 = (_Bool)1;
short var_30 = (short)-25981;
unsigned char var_31 = (unsigned char)216;
unsigned short var_32 = (unsigned short)63132;
int var_33 = -330801575;
_Bool var_34 = (_Bool)0;
unsigned char var_35 = (unsigned char)69;
unsigned char var_36 = (unsigned char)94;
unsigned short var_37 = (unsigned short)56851;
_Bool arr_1 [22] [22] ;
_Bool arr_3 [15] ;
unsigned int arr_7 [15] [15] ;
signed char arr_8 [14] ;
unsigned long long int arr_2 [22] ;
signed char arr_13 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = 3122471849U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 13931208940310810672ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (signed char)-88;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
