#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 12098564635257149890ULL;
signed char var_5 = (signed char)73;
unsigned long long int var_6 = 13435632551648327202ULL;
unsigned int var_8 = 750620489U;
short var_9 = (short)-20529;
unsigned long long int var_10 = 18059564069221722770ULL;
int var_11 = -2146278076;
_Bool var_12 = (_Bool)1;
short var_13 = (short)10070;
unsigned short var_14 = (unsigned short)12788;
signed char var_17 = (signed char)53;
int zero = 0;
signed char var_18 = (signed char)-86;
short var_19 = (short)-17707;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 15542408755646068141ULL;
_Bool var_24 = (_Bool)1;
short var_25 = (short)10746;
_Bool var_26 = (_Bool)0;
unsigned short var_27 = (unsigned short)2932;
long long int var_28 = -9062014281167012808LL;
long long int var_29 = 5007794870839394771LL;
short var_30 = (short)32690;
_Bool var_31 = (_Bool)1;
short var_32 = (short)31643;
short var_33 = (short)30383;
short var_34 = (short)-17199;
unsigned int var_35 = 878998982U;
int var_36 = -1486298629;
long long int var_37 = -47275553956823104LL;
_Bool var_38 = (_Bool)1;
unsigned short var_39 = (unsigned short)40653;
unsigned short var_40 = (unsigned short)47738;
long long int var_41 = -7988552263599147020LL;
_Bool var_42 = (_Bool)0;
unsigned short var_43 = (unsigned short)22942;
_Bool var_44 = (_Bool)0;
_Bool arr_0 [11] ;
int arr_1 [11] ;
unsigned int arr_2 [11] ;
unsigned long long int arr_3 [18] ;
short arr_4 [18] ;
unsigned short arr_6 [10] ;
unsigned short arr_7 [10] ;
unsigned int arr_8 [10] [10] ;
long long int arr_11 [10] [10] [10] ;
_Bool arr_12 [10] [10] [10] ;
short arr_21 [10] [10] ;
_Bool arr_22 [10] [10] [10] [10] [10] ;
unsigned long long int arr_29 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -1951519808;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 213647203U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 13528629049792464103ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (short)-18118;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned short)15691;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (unsigned short)28758;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = 2324035496U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 996112156130343738LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)8470 : (short)23489;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? 17991648813386780831ULL : 9547154713509865658ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
