#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-5;
short var_2 = (short)9452;
long long int var_4 = -9175615458219377396LL;
long long int var_6 = 3500567630967465773LL;
signed char var_7 = (signed char)109;
unsigned short var_8 = (unsigned short)22614;
long long int var_10 = -5565193953622847008LL;
unsigned int var_11 = 4103632790U;
int var_12 = 415204798;
unsigned char var_13 = (unsigned char)41;
unsigned char var_14 = (unsigned char)70;
int zero = 0;
short var_15 = (short)19680;
int var_16 = -1290309960;
unsigned int var_17 = 2631584375U;
long long int var_18 = -2126341048693616834LL;
int var_19 = 391611706;
unsigned long long int var_20 = 17854708900902574954ULL;
signed char var_21 = (signed char)-13;
short var_22 = (short)7806;
unsigned int var_23 = 2660509027U;
short var_24 = (short)12429;
unsigned short var_25 = (unsigned short)35304;
_Bool var_26 = (_Bool)0;
signed char var_27 = (signed char)9;
unsigned long long int var_28 = 17496256319028657068ULL;
short var_29 = (short)7004;
short var_30 = (short)-5817;
unsigned int var_31 = 554893513U;
unsigned long long int var_32 = 15646032946238191577ULL;
signed char var_33 = (signed char)79;
_Bool var_34 = (_Bool)1;
signed char var_35 = (signed char)-81;
unsigned char var_36 = (unsigned char)79;
signed char var_37 = (signed char)-7;
unsigned long long int var_38 = 12873249513814753497ULL;
unsigned long long int var_39 = 5511561243714963708ULL;
unsigned long long int var_40 = 3520894031473702337ULL;
unsigned short var_41 = (unsigned short)1019;
unsigned int var_42 = 1835153581U;
unsigned short var_43 = (unsigned short)1320;
long long int arr_2 [18] ;
signed char arr_3 [18] [18] ;
unsigned int arr_4 [18] [18] [18] [18] ;
_Bool arr_5 [18] ;
int arr_6 [18] ;
unsigned long long int arr_9 [13] [13] ;
int arr_12 [13] [13] [13] ;
signed char arr_13 [13] [13] [13] [13] ;
signed char arr_14 [13] [13] [13] [13] ;
unsigned char arr_15 [13] [13] [13] ;
int arr_18 [13] [13] [13] [13] ;
long long int arr_19 [13] [13] [13] [13] [13] [13] ;
signed char arr_20 [13] [13] [13] ;
unsigned char arr_23 [13] [13] [13] [13] [13] [13] ;
unsigned char arr_29 [13] [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -292972930007581091LL : -6457883920697464510LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 1647326475U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = -462115795;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = 16741851946058685544ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 700268543;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-27 : (signed char)75;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)14 : (signed char)-70;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 1807806945;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3620526281865572863LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (unsigned char)34 : (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (unsigned char)200 : (unsigned char)193;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
