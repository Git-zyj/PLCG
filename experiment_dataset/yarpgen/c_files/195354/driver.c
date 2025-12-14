#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -432185598;
int var_1 = -1479491309;
unsigned long long int var_3 = 1021859531809627399ULL;
int var_4 = 1245088556;
int var_5 = 1053814966;
long long int var_7 = 3925352166693548973LL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)88;
unsigned long long int var_11 = 5143171979201971180ULL;
int var_13 = 1423340260;
short var_14 = (short)-20439;
int zero = 0;
unsigned char var_15 = (unsigned char)97;
short var_16 = (short)9186;
long long int var_17 = 5806887953363335072LL;
_Bool var_18 = (_Bool)1;
long long int var_19 = 7668951168085721390LL;
unsigned long long int var_20 = 7151641180668672851ULL;
_Bool var_21 = (_Bool)0;
int var_22 = -345305723;
int var_23 = 1358523416;
int var_24 = -762460423;
long long int var_25 = 2287846696991380271LL;
int var_26 = 395150080;
int var_27 = -988030514;
short var_28 = (short)-17399;
short var_29 = (short)3266;
short var_30 = (short)-23044;
_Bool var_31 = (_Bool)0;
unsigned long long int var_32 = 10938288111631861822ULL;
unsigned long long int var_33 = 4535766350341484574ULL;
_Bool var_34 = (_Bool)1;
_Bool var_35 = (_Bool)0;
_Bool var_36 = (_Bool)1;
_Bool var_37 = (_Bool)1;
long long int var_38 = 162438356149458133LL;
short var_39 = (short)17995;
_Bool var_40 = (_Bool)1;
long long int var_41 = -4073397868317855133LL;
int var_42 = 1052530604;
short var_43 = (short)29252;
_Bool var_44 = (_Bool)0;
short var_45 = (short)22195;
_Bool var_46 = (_Bool)1;
int var_47 = 1830213881;
unsigned long long int var_48 = 7609619999156392926ULL;
unsigned char var_49 = (unsigned char)53;
unsigned char var_50 = (unsigned char)1;
long long int var_51 = -2621536100403784374LL;
int var_52 = 1984300088;
int arr_0 [23] ;
unsigned long long int arr_1 [23] ;
unsigned long long int arr_3 [23] [23] [23] ;
unsigned char arr_4 [23] [23] [23] ;
_Bool arr_5 [23] [23] [23] ;
_Bool arr_6 [23] [23] [23] ;
short arr_7 [23] [23] [23] ;
int arr_13 [23] [23] ;
_Bool arr_15 [23] [23] ;
short arr_16 [23] [23] ;
int arr_20 [23] ;
unsigned char arr_21 [23] ;
int arr_22 [23] [23] [23] ;
short arr_26 [23] ;
_Bool arr_27 [23] [23] [23] [23] ;
int arr_30 [23] [23] [23] [23] [23] ;
long long int arr_43 [12] [12] [12] [12] ;
unsigned char arr_46 [12] [12] [12] [12] [12] ;
short arr_47 [12] [12] [12] [12] [12] [12] ;
short arr_55 [11] ;
unsigned char arr_59 [11] [11] [11] [11] ;
short arr_69 [11] [11] ;
unsigned long long int arr_8 [23] [23] [23] ;
int arr_11 [23] [23] [23] [23] ;
int arr_14 [23] ;
int arr_17 [23] [23] ;
long long int arr_18 [23] ;
unsigned long long int arr_36 [12] [12] ;
unsigned char arr_37 [12] ;
unsigned long long int arr_64 [11] [11] [11] [11] ;
long long int arr_79 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1066874681;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 3963411098756681622ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 5801939444038422563ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-32438;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = -248470917;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-11686;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = -2130579863;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = -1338470646;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_26 [i_0] = (short)32528;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -740249875 : -151552586;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = 6062007494490119083LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (short)-1075 : (short)14898;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_55 [i_0] = (short)18999;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_59 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)19 : (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_69 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-24144 : (short)16159;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 17152903107632540819ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 1771384153;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = -950878400;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = -925162594;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = -1840459291005879817LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_36 [i_0] [i_1] = (i_1 % 2 == 0) ? 9150590020376064124ULL : 4345751424284733315ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? (unsigned char)177 : (unsigned char)66;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_64 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 11612993079733409027ULL : 12086810060314757469ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_79 [i_0] = (i_0 % 2 == 0) ? -3664359743427077238LL : -6402061989793536323LL;
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
    hash(&seed, var_52);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_64 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_79 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
