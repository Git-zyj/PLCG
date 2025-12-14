#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2550399057291551831LL;
short var_1 = (short)27810;
int var_2 = -1713878296;
unsigned int var_3 = 413789211U;
unsigned short var_5 = (unsigned short)11188;
unsigned long long int var_6 = 14128368455323569283ULL;
short var_7 = (short)-7469;
short var_8 = (short)-5875;
int var_9 = -165732512;
unsigned int var_10 = 4276027503U;
short var_11 = (short)8528;
signed char var_12 = (signed char)24;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-10625;
int var_15 = -714937803;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)9603;
int var_18 = -715032396;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
int var_21 = 182406752;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)90;
short var_24 = (short)-20324;
short var_25 = (short)-23158;
unsigned int var_26 = 1093267884U;
signed char var_27 = (signed char)-88;
signed char var_28 = (signed char)6;
short var_29 = (short)-20606;
short var_30 = (short)11460;
long long int var_31 = -6972203250186948815LL;
unsigned short var_32 = (unsigned short)8313;
short var_33 = (short)-7750;
int var_34 = -1032731296;
signed char var_35 = (signed char)-46;
long long int var_36 = 7146746605374050945LL;
long long int var_37 = -7364034900754408661LL;
unsigned int var_38 = 1063302225U;
int var_39 = -983531528;
_Bool var_40 = (_Bool)0;
int var_41 = -977487387;
short var_42 = (short)13458;
long long int var_43 = -774839319205495331LL;
_Bool var_44 = (_Bool)0;
signed char var_45 = (signed char)13;
unsigned char var_46 = (unsigned char)58;
unsigned int var_47 = 3964291345U;
int arr_0 [11] ;
unsigned char arr_1 [11] [11] ;
unsigned short arr_2 [11] ;
int arr_3 [11] [11] [11] ;
unsigned short arr_6 [11] ;
_Bool arr_7 [11] ;
int arr_9 [11] [11] [11] [11] ;
long long int arr_10 [11] [11] [11] [11] ;
short arr_11 [11] ;
unsigned int arr_12 [11] ;
unsigned long long int arr_14 [11] ;
int arr_15 [11] [11] ;
short arr_16 [11] [11] ;
unsigned short arr_19 [11] [11] ;
long long int arr_22 [11] [11] [11] ;
short arr_23 [11] ;
short arr_27 [15] [15] ;
unsigned short arr_28 [15] ;
_Bool arr_30 [15] [15] ;
unsigned short arr_31 [15] ;
short arr_32 [15] ;
long long int arr_33 [15] ;
unsigned int arr_34 [15] [15] [15] ;
unsigned int arr_35 [15] [15] [15] ;
long long int arr_36 [15] [15] [15] [15] ;
signed char arr_40 [15] ;
unsigned long long int arr_41 [15] ;
signed char arr_42 [15] [15] [15] ;
_Bool arr_44 [15] [15] [15] ;
unsigned int arr_45 [15] ;
signed char arr_4 [11] [11] ;
signed char arr_5 [11] ;
short arr_8 [11] ;
unsigned long long int arr_21 [11] [11] [11] ;
int arr_24 [11] [11] [11] ;
signed char arr_25 [11] [11] [11] ;
unsigned short arr_26 [11] ;
unsigned short arr_29 [15] ;
short arr_37 [15] [15] ;
unsigned long long int arr_38 [15] ;
int arr_39 [15] ;
_Bool arr_46 [15] ;
short arr_47 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -287236867;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)64670;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -204825655;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned short)22241;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -107254396;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 8027471145932728155LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (short)8031;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = 3212072041U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = 7139262345440487728ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = -535618436;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-30844;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)42098 : (unsigned short)58559;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 6477065103740814708LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_23 [i_0] = (short)21215;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_27 [i_0] [i_1] = (short)29478;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_28 [i_0] = (unsigned short)44978;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_30 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_31 [i_0] = (unsigned short)10997;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_32 [i_0] = (short)-27594;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_33 [i_0] = 5593486208335613246LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 3806919061U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = 4066187443U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = -3902212695726222973LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_40 [i_0] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_41 [i_0] = 10084128206328841765ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_45 [i_0] = 1614829077U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (short)1633;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 17520882840603669779ULL : 16323201769058518193ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1560819685 : -1389778671;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)94 : (signed char)-7;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_26 [i_0] = (unsigned short)948;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_29 [i_0] = (unsigned short)65079;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_37 [i_0] [i_1] = (short)-9469;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_38 [i_0] = 3341377667867845277ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_39 [i_0] = -1262391670;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_46 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (short)-10644;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_47 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
