#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31775;
unsigned int var_1 = 2038854218U;
unsigned short var_2 = (unsigned short)893;
unsigned short var_3 = (unsigned short)60443;
short var_5 = (short)2194;
unsigned long long int var_7 = 5588486862731243906ULL;
unsigned short var_8 = (unsigned short)5245;
int var_10 = -5996749;
unsigned char var_11 = (unsigned char)104;
int zero = 0;
unsigned char var_12 = (unsigned char)242;
unsigned char var_13 = (unsigned char)183;
unsigned short var_14 = (unsigned short)8808;
unsigned long long int var_15 = 5711815258478193964ULL;
signed char var_16 = (signed char)-77;
long long int var_17 = 2261120359617917125LL;
unsigned long long int var_18 = 42059715537077228ULL;
signed char var_19 = (signed char)-30;
short var_20 = (short)9550;
unsigned long long int var_21 = 16055979566711065759ULL;
short var_22 = (short)21807;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 7981512668638617636ULL;
unsigned short var_25 = (unsigned short)59748;
unsigned char var_26 = (unsigned char)168;
unsigned long long int var_27 = 14889063725148548961ULL;
unsigned long long int var_28 = 6594463433089060631ULL;
short var_29 = (short)-17756;
int var_30 = 1904498919;
short var_31 = (short)15934;
signed char var_32 = (signed char)101;
unsigned char var_33 = (unsigned char)131;
unsigned long long int var_34 = 4436605184757263740ULL;
long long int var_35 = -7724632080261299512LL;
unsigned char var_36 = (unsigned char)205;
unsigned short var_37 = (unsigned short)16197;
signed char var_38 = (signed char)49;
_Bool var_39 = (_Bool)0;
unsigned int var_40 = 4250474268U;
long long int var_41 = -5108467053841239240LL;
unsigned char var_42 = (unsigned char)216;
unsigned long long int var_43 = 2213287368676363600ULL;
signed char var_44 = (signed char)-114;
short var_45 = (short)21790;
unsigned long long int var_46 = 17764017195999751203ULL;
_Bool var_47 = (_Bool)0;
unsigned int var_48 = 3738665811U;
unsigned short var_49 = (unsigned short)49046;
int var_50 = -1945893960;
unsigned char var_51 = (unsigned char)59;
unsigned long long int arr_2 [14] [14] ;
int arr_4 [23] ;
signed char arr_5 [23] ;
short arr_8 [23] ;
unsigned int arr_9 [23] [23] [23] [23] ;
int arr_10 [23] ;
unsigned long long int arr_13 [23] [23] ;
unsigned short arr_16 [23] [23] ;
unsigned long long int arr_17 [23] [23] [23] [23] ;
unsigned long long int arr_20 [23] [23] [23] ;
unsigned long long int arr_21 [23] ;
unsigned short arr_22 [23] [23] ;
unsigned int arr_24 [23] [23] [23] ;
unsigned int arr_25 [23] [23] [23] [23] ;
unsigned long long int arr_27 [23] ;
unsigned int arr_37 [15] [15] ;
_Bool arr_40 [15] [15] ;
long long int arr_48 [15] ;
unsigned long long int arr_62 [22] ;
int arr_3 [14] ;
unsigned long long int arr_6 [23] ;
short arr_26 [23] [23] [23] [23] ;
long long int arr_35 [11] ;
unsigned char arr_39 [15] ;
_Bool arr_44 [15] [15] ;
int arr_49 [15] [15] ;
unsigned short arr_58 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 2389057622646404771ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 492029972;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-56 : (signed char)73;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (short)6496;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 2980267445U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = -764364898;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = 4984067887442386004ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)18500;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 14874709170959224622ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 14399130881874290933ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 3337924715465601003ULL : 10129211977216652148ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned short)29334;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 106286771U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1813238389U : 871248886U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 14001785923310854737ULL : 10208268354426264155ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_37 [i_0] [i_1] = 210410805U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_40 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_48 [i_0] = (i_0 % 2 == 0) ? -1728700071104184279LL : -7918659139945713948LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_62 [i_0] = 9296843930789128374ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -143000882 : 269967530;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 4688494549746508921ULL : 14043258515012866888ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-14431 : (short)13026;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_35 [i_0] = 8144845092237206573LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_39 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_44 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_49 [i_0] [i_1] = (i_0 % 2 == 0) ? -1214810654 : -1915988546;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_58 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)4562 : (unsigned short)12670;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_44 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_49 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_58 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
