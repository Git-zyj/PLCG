#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2459393704595062767LL;
unsigned char var_1 = (unsigned char)160;
unsigned short var_3 = (unsigned short)19282;
int var_4 = 25208716;
unsigned long long int var_7 = 14259462725778746456ULL;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)115;
unsigned long long int var_11 = 11260608433559703743ULL;
unsigned char var_13 = (unsigned char)55;
short var_14 = (short)-2699;
short var_15 = (short)28001;
int var_16 = 1661383919;
unsigned long long int var_17 = 8489032998802593678ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)19455;
unsigned char var_21 = (unsigned char)225;
unsigned int var_22 = 3799745397U;
short var_23 = (short)-27511;
_Bool var_24 = (_Bool)0;
int var_25 = 708862827;
signed char var_26 = (signed char)-35;
unsigned int var_27 = 469991061U;
unsigned short var_28 = (unsigned short)48749;
unsigned int var_29 = 2627672112U;
_Bool var_30 = (_Bool)0;
unsigned char var_31 = (unsigned char)167;
int var_32 = -1025116477;
signed char var_33 = (signed char)-89;
unsigned long long int var_34 = 14778947163900945940ULL;
unsigned char var_35 = (unsigned char)121;
int arr_0 [10] ;
unsigned char arr_1 [10] ;
unsigned short arr_2 [10] [10] [10] ;
int arr_3 [10] ;
int arr_4 [10] [10] [10] ;
int arr_5 [10] ;
int arr_7 [10] [10] [10] ;
int arr_8 [10] [10] [10] ;
unsigned char arr_10 [10] [10] ;
unsigned char arr_12 [10] [10] [10] ;
unsigned long long int arr_13 [10] [10] [10] [10] ;
unsigned char arr_14 [10] [10] [10] ;
unsigned char arr_16 [10] [10] ;
long long int arr_17 [10] [10] ;
unsigned int arr_20 [10] [10] [10] ;
short arr_6 [10] [10] [10] ;
unsigned short arr_11 [10] [10] ;
signed char arr_21 [10] ;
int arr_22 [10] ;
unsigned int arr_26 [10] ;
_Bool arr_27 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 158918183;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)21633;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 63685217 : -2118410235;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 941447303;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -568189667 : -554416075;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -642805124;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1861181223;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 1656841288175325350ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_17 [i_0] [i_1] = -5438734654359730331LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 521291836U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)8125 : (short)-17138;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)4526;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_21 [i_0] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_22 [i_0] = -498672353;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_26 [i_0] = 4092191063U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_27 [i_0] = (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
