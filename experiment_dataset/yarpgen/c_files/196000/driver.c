#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 434175739;
unsigned char var_4 = (unsigned char)191;
unsigned char var_9 = (unsigned char)85;
unsigned long long int var_10 = 906906659006516016ULL;
unsigned char var_12 = (unsigned char)243;
unsigned char var_14 = (unsigned char)40;
int var_16 = 1893018878;
int zero = 0;
unsigned char var_19 = (unsigned char)205;
unsigned int var_20 = 2906460688U;
unsigned long long int var_21 = 2810691428236304555ULL;
unsigned int var_22 = 3338720017U;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)108;
long long int var_25 = -5359298219116481899LL;
_Bool var_26 = (_Bool)1;
unsigned char var_27 = (unsigned char)183;
unsigned char var_28 = (unsigned char)180;
long long int var_29 = 7190772119598371875LL;
unsigned int var_30 = 856793199U;
unsigned int var_31 = 886468727U;
_Bool var_32 = (_Bool)1;
unsigned char var_33 = (unsigned char)26;
unsigned char var_34 = (unsigned char)6;
unsigned short var_35 = (unsigned short)55367;
_Bool var_36 = (_Bool)0;
unsigned char var_37 = (unsigned char)106;
int var_38 = -1664441795;
long long int var_39 = 8699631470115201819LL;
_Bool var_40 = (_Bool)0;
_Bool var_41 = (_Bool)1;
unsigned char var_42 = (unsigned char)142;
unsigned char var_43 = (unsigned char)64;
unsigned short var_44 = (unsigned short)47353;
signed char arr_1 [21] ;
unsigned long long int arr_2 [21] ;
short arr_3 [21] ;
_Bool arr_5 [21] [21] [21] ;
unsigned char arr_6 [21] [21] [21] ;
unsigned char arr_7 [21] [21] ;
_Bool arr_8 [21] [21] ;
unsigned short arr_9 [21] [21] [21] ;
_Bool arr_10 [21] [21] [21] ;
unsigned char arr_12 [21] [21] [21] [21] [21] ;
unsigned char arr_13 [21] [21] [21] ;
unsigned char arr_15 [23] ;
signed char arr_16 [23] [23] ;
unsigned char arr_18 [12] [12] ;
unsigned int arr_31 [20] ;
_Bool arr_35 [19] ;
unsigned long long int arr_36 [19] ;
long long int arr_43 [19] ;
unsigned long long int arr_44 [19] [19] ;
unsigned char arr_4 [21] ;
unsigned long long int arr_11 [21] [21] [21] [21] ;
unsigned long long int arr_14 [21] ;
signed char arr_17 [23] ;
unsigned long long int arr_24 [12] ;
unsigned int arr_33 [20] ;
_Bool arr_45 [19] [19] [19] [19] [19] ;
long long int arr_46 [19] [19] ;
unsigned int arr_47 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 12107955717292773333ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)17405;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)4824;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_31 [i_0] = 2045534947U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_35 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_36 [i_0] = 14118265431875521430ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_43 [i_0] = -7592316182947099962LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_44 [i_0] [i_1] = 6875405610330503105ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 6834216456928928550ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 17485015948158292819ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 16289305410372761438ULL : 2287865235846783044ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_33 [i_0] = 2549289691U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_46 [i_0] [i_1] = (i_0 % 2 == 0) ? -1450221123474997015LL : 4147098429796672951LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_47 [i_0] = 1556602896U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_46 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_47 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
