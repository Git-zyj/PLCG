#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -809681676;
unsigned long long int var_3 = 2046770341711196503ULL;
signed char var_6 = (signed char)-4;
unsigned long long int var_8 = 13538436550789152586ULL;
unsigned long long int var_12 = 10221219771333994744ULL;
unsigned long long int var_15 = 5259009059455992494ULL;
unsigned int var_16 = 688615762U;
long long int var_18 = 7228826643872155646LL;
int zero = 0;
int var_19 = -841265184;
long long int var_20 = 1773373199848233898LL;
long long int var_21 = -5330769374304800615LL;
short var_22 = (short)-11160;
unsigned int var_23 = 1825885396U;
unsigned int var_24 = 4089851397U;
int var_25 = 108037181;
long long int var_26 = -4536394685756516870LL;
unsigned long long int var_27 = 18066246457712982995ULL;
short var_28 = (short)14056;
unsigned long long int var_29 = 10027452941547364613ULL;
unsigned int var_30 = 2716454017U;
_Bool var_31 = (_Bool)1;
unsigned int var_32 = 3892240988U;
int var_33 = -2105561890;
_Bool var_34 = (_Bool)1;
unsigned char var_35 = (unsigned char)197;
unsigned char var_36 = (unsigned char)213;
long long int var_37 = 9027589648875773333LL;
int var_38 = -108734745;
signed char var_39 = (signed char)-124;
unsigned int var_40 = 177247646U;
long long int var_41 = 154651952068091636LL;
int var_42 = 498147325;
signed char var_43 = (signed char)79;
unsigned char var_44 = (unsigned char)234;
unsigned long long int var_45 = 2886784716761651591ULL;
long long int var_46 = 528096337410350307LL;
short var_47 = (short)29833;
signed char var_48 = (signed char)-58;
unsigned long long int var_49 = 1350550570358783833ULL;
int var_50 = -623113836;
long long int var_51 = -469655943607139254LL;
int var_52 = -1274712608;
unsigned char var_53 = (unsigned char)4;
unsigned char var_54 = (unsigned char)189;
int var_55 = 1573505531;
long long int var_56 = 8641794790052347361LL;
int var_57 = 1796639035;
int var_58 = -1715017508;
long long int arr_0 [20] [20] ;
unsigned long long int arr_1 [20] ;
int arr_2 [20] [20] ;
_Bool arr_3 [20] ;
short arr_5 [20] [20] [20] ;
unsigned long long int arr_6 [20] [20] [20] [20] ;
signed char arr_8 [20] [20] [20] ;
int arr_9 [20] [20] [20] ;
unsigned long long int arr_10 [20] [20] ;
signed char arr_13 [20] [20] [20] [20] ;
signed char arr_14 [20] [20] [20] ;
_Bool arr_16 [20] [20] ;
unsigned int arr_17 [20] [20] [20] [20] [20] ;
_Bool arr_19 [20] [20] [20] ;
unsigned char arr_20 [20] [20] [20] [20] ;
unsigned long long int arr_21 [20] [20] [20] [20] ;
long long int arr_22 [20] [20] [20] [20] [20] ;
unsigned short arr_24 [20] [20] [20] [20] ;
unsigned long long int arr_25 [20] ;
unsigned long long int arr_26 [20] ;
signed char arr_36 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 1825104035702611456LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 13025780604347337367ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 334714306;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-18715;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 606916446800311659ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1036865053;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = 3185035760689176138ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-119 : (signed char)-35;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 358014043U : 4084756155U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 10964114161585797723ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = 8868395877099230391LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (unsigned short)60222;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_25 [i_0] = 13257914301957315669ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_26 [i_0] = 13884187588656488644ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_36 [i_0] = (signed char)-5;
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
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
