#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23975;
unsigned char var_1 = (unsigned char)138;
unsigned short var_2 = (unsigned short)56923;
unsigned long long int var_3 = 14217258471681379460ULL;
unsigned long long int var_4 = 627248996704845532ULL;
short var_6 = (short)9728;
_Bool var_7 = (_Bool)1;
_Bool var_11 = (_Bool)1;
short var_12 = (short)12499;
long long int var_13 = 3051462386084080321LL;
unsigned long long int var_15 = 14136034811787241700ULL;
int zero = 0;
unsigned int var_16 = 642490586U;
unsigned long long int var_17 = 3212281240443201307ULL;
unsigned int var_18 = 408636373U;
unsigned long long int var_19 = 13467224180964142126ULL;
unsigned int var_20 = 2135806708U;
unsigned short var_21 = (unsigned short)19030;
long long int var_22 = -5158491162841406168LL;
short var_23 = (short)3104;
int var_24 = -628994421;
int var_25 = -1234681651;
short var_26 = (short)-32335;
_Bool var_27 = (_Bool)1;
short var_28 = (short)6526;
signed char var_29 = (signed char)-40;
short var_30 = (short)-8210;
_Bool var_31 = (_Bool)0;
unsigned long long int arr_0 [25] ;
short arr_2 [25] ;
unsigned short arr_3 [25] [25] ;
unsigned char arr_4 [25] [25] ;
unsigned char arr_5 [25] [25] ;
signed char arr_8 [10] ;
_Bool arr_13 [10] ;
unsigned int arr_19 [10] [10] [10] [10] ;
int arr_23 [14] ;
_Bool arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 17293404601784486960ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)-7233;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)42477;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)251 : (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1811704695U : 3805949998U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_23 [i_0] = 542093609;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
