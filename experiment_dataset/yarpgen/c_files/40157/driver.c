#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 750285060;
_Bool var_2 = (_Bool)0;
long long int var_3 = -408421755352466939LL;
unsigned short var_4 = (unsigned short)10168;
unsigned char var_6 = (unsigned char)236;
long long int var_7 = -1259884494836878561LL;
unsigned char var_8 = (unsigned char)68;
unsigned short var_9 = (unsigned short)54498;
unsigned char var_10 = (unsigned char)59;
signed char var_11 = (signed char)126;
unsigned int var_12 = 1795096482U;
short var_14 = (short)13092;
int zero = 0;
signed char var_15 = (signed char)-90;
unsigned int var_16 = 1662075772U;
long long int var_17 = -7314007428787648105LL;
unsigned short var_18 = (unsigned short)23872;
long long int var_19 = -8419441784859562280LL;
short var_20 = (short)16888;
unsigned char var_21 = (unsigned char)159;
unsigned int var_22 = 2870173813U;
long long int var_23 = 2898685589658530657LL;
unsigned char var_24 = (unsigned char)181;
unsigned long long int var_25 = 17603639251518500627ULL;
short var_26 = (short)-14013;
short var_27 = (short)31848;
short var_28 = (short)-25009;
long long int var_29 = -3218187719090813316LL;
int var_30 = -221154587;
unsigned int var_31 = 813638877U;
unsigned long long int var_32 = 12017955387716691330ULL;
long long int var_33 = 1644083488204575498LL;
unsigned short var_34 = (unsigned short)12217;
int var_35 = -592174835;
signed char var_36 = (signed char)78;
long long int var_37 = -1683545501012687488LL;
unsigned int var_38 = 764687333U;
unsigned char var_39 = (unsigned char)157;
short var_40 = (short)5167;
signed char var_41 = (signed char)-21;
int var_42 = 1432863400;
unsigned long long int var_43 = 3851869616032692785ULL;
signed char var_44 = (signed char)-122;
unsigned short var_45 = (unsigned short)3828;
int var_46 = -737774664;
int var_47 = 919089840;
int var_48 = -1643589095;
unsigned short var_49 = (unsigned short)1118;
long long int var_50 = 7155931275272589162LL;
_Bool var_51 = (_Bool)0;
unsigned long long int arr_1 [23] ;
unsigned int arr_3 [23] ;
unsigned char arr_4 [23] [23] [23] ;
unsigned int arr_5 [25] ;
unsigned short arr_6 [25] ;
signed char arr_7 [25] ;
int arr_8 [25] [25] [25] ;
unsigned long long int arr_9 [25] [25] [25] ;
short arr_11 [25] [25] [25] ;
long long int arr_14 [25] [25] [25] ;
short arr_16 [25] [25] [25] [25] [25] [25] ;
long long int arr_18 [25] ;
long long int arr_20 [25] [25] [25] [25] [25] [25] [25] ;
short arr_21 [25] ;
int arr_22 [25] [25] [25] [25] [25] [25] ;
short arr_24 [25] [25] [25] [25] ;
_Bool arr_29 [25] [25] [25] [25] [25] ;
unsigned int arr_32 [25] [25] [25] [25] [25] ;
short arr_37 [25] [25] ;
unsigned long long int arr_35 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 17392108965265315140ULL : 8292488098676580279ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3459467457U : 1577599507U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2509419283U : 3596737319U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned short)10824;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)45 : (signed char)87;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1324339622;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4474243467505926191ULL : 16601601162382479771ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)22887;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 3191633431008781245LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (short)2071 : (short)-7124;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 2243376375539345751LL : 2449801068740084175LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -4044319518676496182LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (short)-5511 : (short)21574;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1248624110;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-17424 : (short)-19722;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 3203926369U : 2205939395U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_37 [i_0] [i_1] = (short)-9022;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? 16186837334214519718ULL : 8262584533473774268ULL;
}

void checksum() {
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
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
