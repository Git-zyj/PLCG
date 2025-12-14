#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15498;
unsigned short var_1 = (unsigned short)44676;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)4;
unsigned long long int var_4 = 5458467997223005618ULL;
signed char var_5 = (signed char)54;
unsigned long long int var_6 = 8661185515256366341ULL;
signed char var_7 = (signed char)-26;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 2787179013258660694ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)39;
int var_11 = 4177749;
int var_12 = 495416920;
signed char var_13 = (signed char)98;
unsigned int var_14 = 3918493958U;
unsigned short var_15 = (unsigned short)52270;
unsigned int var_16 = 2083797184U;
signed char var_17 = (signed char)73;
int var_18 = -1935273014;
unsigned char var_19 = (unsigned char)231;
int var_20 = -244194417;
unsigned char var_21 = (unsigned char)132;
long long int var_22 = 2105036007846642420LL;
unsigned long long int var_23 = 8148538674062719341ULL;
short var_24 = (short)-1623;
int var_25 = 2006143817;
unsigned short var_26 = (unsigned short)12672;
long long int var_27 = 3847652000525732077LL;
_Bool var_28 = (_Bool)0;
unsigned long long int var_29 = 572685413595478263ULL;
signed char var_30 = (signed char)5;
signed char var_31 = (signed char)-11;
short var_32 = (short)-23558;
signed char var_33 = (signed char)-115;
_Bool var_34 = (_Bool)0;
short var_35 = (short)4952;
short var_36 = (short)-26872;
int var_37 = 296758813;
signed char var_38 = (signed char)28;
short arr_0 [12] ;
short arr_1 [12] ;
signed char arr_2 [12] [12] ;
short arr_4 [12] [12] [12] [12] ;
signed char arr_5 [12] ;
short arr_6 [22] [22] ;
short arr_7 [22] [22] ;
long long int arr_8 [18] [18] ;
int arr_9 [18] ;
unsigned short arr_10 [18] ;
unsigned long long int arr_11 [14] ;
unsigned long long int arr_12 [14] ;
signed char arr_14 [14] ;
short arr_16 [14] [14] [14] ;
unsigned char arr_17 [14] [14] ;
unsigned long long int arr_19 [14] [14] ;
signed char arr_20 [14] [14] [14] ;
short arr_22 [14] [14] [14] [14] ;
long long int arr_13 [14] ;
long long int arr_26 [14] [14] [14] [14] ;
_Bool arr_29 [14] [14] ;
signed char arr_33 [14] ;
long long int arr_43 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)-17851;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-10655 : (short)20574;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)49 : (signed char)-114;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)9378 : (short)-10181;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-24503;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (short)31120;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = 110946653284228120LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = -1939502744;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (unsigned short)22973;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 18330220132684011728ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = 1832562477196274493ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (short)-2227;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_19 [i_0] [i_1] = 17726188081814416546ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)29176 : (short)-9345;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = -2452213702918721085LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = -5773646232833120840LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_29 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_33 [i_0] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_43 [i_0] = (i_0 % 2 == 0) ? -3836447130539565781LL : 7081091331535345486LL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_43 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
