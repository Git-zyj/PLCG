#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -440417685;
int var_2 = -2010193167;
unsigned short var_3 = (unsigned short)522;
signed char var_6 = (signed char)30;
short var_7 = (short)-7097;
unsigned int var_8 = 1176638191U;
signed char var_9 = (signed char)4;
signed char var_10 = (signed char)52;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)54;
int var_13 = -217929281;
signed char var_14 = (signed char)43;
unsigned short var_15 = (unsigned short)57279;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int var_19 = -1338572411;
unsigned short var_20 = (unsigned short)44955;
int var_21 = 454620138;
unsigned int var_22 = 3323053699U;
int var_23 = 1747006001;
signed char var_24 = (signed char)-47;
short var_25 = (short)2644;
unsigned short var_26 = (unsigned short)42974;
short var_27 = (short)-26678;
signed char var_28 = (signed char)-58;
unsigned short var_29 = (unsigned short)62548;
signed char var_30 = (signed char)102;
unsigned int var_31 = 901537389U;
int var_32 = 2008945001;
short arr_0 [24] ;
unsigned short arr_1 [24] [24] ;
signed char arr_2 [24] ;
short arr_3 [24] ;
_Bool arr_4 [24] [24] ;
unsigned int arr_6 [24] [24] ;
signed char arr_7 [24] [24] ;
_Bool arr_8 [24] [24] [24] ;
unsigned short arr_9 [24] [24] ;
short arr_14 [14] [14] ;
int arr_17 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)-29757;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)36804;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)105;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)-13068;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 2776108987U : 2166860602U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-104 : (signed char)-38;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)37627;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-24879;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = -376737845;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
