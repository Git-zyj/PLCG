#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 332002680003150440ULL;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-31976;
long long int var_3 = 7330011824387212195LL;
int var_4 = 351908210;
unsigned long long int var_5 = 8470468108709858426ULL;
short var_6 = (short)19681;
unsigned int var_8 = 2747777293U;
short var_11 = (short)5967;
int var_12 = -1880958595;
unsigned short var_14 = (unsigned short)3340;
short var_15 = (short)4874;
unsigned long long int var_17 = 5489638944773633898ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)84;
unsigned long long int var_20 = 5435587896059091983ULL;
unsigned short var_21 = (unsigned short)49550;
int var_22 = 736813400;
unsigned long long int var_23 = 11707063865985517073ULL;
long long int var_24 = 3888223702832299297LL;
int var_25 = -378682584;
long long int var_26 = -5617097999569177582LL;
unsigned int var_27 = 4027810201U;
long long int var_28 = -2239872116974588268LL;
short var_29 = (short)-11875;
unsigned char var_30 = (unsigned char)151;
unsigned char var_31 = (unsigned char)102;
unsigned long long int var_32 = 12743717546188251412ULL;
long long int var_33 = 3816694567016238974LL;
long long int var_34 = -567452678854576833LL;
unsigned long long int var_35 = 13164758435313697176ULL;
_Bool var_36 = (_Bool)0;
int var_37 = 2142514428;
signed char var_38 = (signed char)68;
int arr_0 [10] ;
unsigned int arr_5 [10] ;
short arr_7 [10] [10] [10] ;
unsigned long long int arr_8 [10] [10] [10] ;
int arr_11 [10] [10] [10] [10] ;
int arr_13 [10] ;
int arr_16 [10] [10] [10] [10] ;
unsigned char arr_22 [10] [10] [10] ;
_Bool arr_23 [10] [10] ;
signed char arr_25 [10] [10] [10] [10] ;
int arr_30 [10] [10] [10] [10] [10] ;
signed char arr_36 [22] [22] ;
short arr_39 [22] ;
unsigned short arr_43 [22] ;
_Bool arr_44 [22] [22] ;
unsigned long long int arr_45 [22] [22] [22] [22] [22] ;
unsigned short arr_46 [22] ;
unsigned int arr_50 [24] ;
short arr_51 [24] ;
unsigned int arr_52 [24] ;
unsigned int arr_15 [10] [10] [10] ;
unsigned long long int arr_20 [10] [10] [10] [10] ;
unsigned int arr_34 [10] [10] [10] [10] [10] ;
short arr_48 [22] [22] [22] ;
short arr_49 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -351698785 : -307455280;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1103000542U : 2182635207U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)17718;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 16854329970840418745ULL : 10619582147192594358ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 936691691;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 1610535685 : 1110338050;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 1959031550;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_23 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (signed char)113;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = 2048005883;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_36 [i_0] [i_1] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_39 [i_0] = (short)-29159;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_43 [i_0] = (unsigned short)48127;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_44 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] = 8361557478918374922ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_46 [i_0] = (unsigned short)56780;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_50 [i_0] = 684412372U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_51 [i_0] = (short)11091;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_52 [i_0] = 4271486256U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4098341297U : 342285502U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 728774333823910916ULL : 6043233388508298163ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 1658410104U : 2741118421U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = (short)-34;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_49 [i_0] [i_1] = (short)5129;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_48 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_49 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
