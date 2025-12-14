#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3301087933U;
int var_1 = -9171870;
signed char var_2 = (signed char)-4;
unsigned short var_3 = (unsigned short)47890;
unsigned long long int var_4 = 13795209320635486483ULL;
unsigned char var_5 = (unsigned char)14;
signed char var_6 = (signed char)-112;
_Bool var_7 = (_Bool)1;
long long int var_8 = -2311122815198331824LL;
signed char var_9 = (signed char)-64;
int zero = 0;
signed char var_10 = (signed char)103;
unsigned char var_11 = (unsigned char)46;
signed char var_12 = (signed char)31;
unsigned short var_13 = (unsigned short)25977;
unsigned char var_14 = (unsigned char)181;
unsigned int var_15 = 2313684423U;
int var_16 = 1074230329;
short var_17 = (short)-28946;
unsigned int var_18 = 934804982U;
short var_19 = (short)12067;
signed char var_20 = (signed char)-13;
short var_21 = (short)-1759;
unsigned short var_22 = (unsigned short)45676;
signed char var_23 = (signed char)-39;
short var_24 = (short)-19036;
_Bool var_25 = (_Bool)1;
long long int var_26 = 1699306755400316928LL;
unsigned int var_27 = 239798114U;
signed char var_28 = (signed char)75;
unsigned short var_29 = (unsigned short)47346;
unsigned int var_30 = 2897039613U;
unsigned int var_31 = 752346412U;
long long int var_32 = 760672940380017751LL;
_Bool var_33 = (_Bool)0;
short var_34 = (short)8901;
unsigned int arr_0 [15] ;
unsigned long long int arr_1 [15] [15] ;
long long int arr_2 [15] ;
int arr_5 [15] ;
unsigned short arr_8 [15] ;
long long int arr_10 [15] [15] [15] ;
unsigned short arr_13 [15] [15] [15] [15] ;
_Bool arr_14 [15] [15] [15] ;
signed char arr_16 [15] [15] ;
int arr_21 [15] [15] [15] [15] [15] [15] ;
unsigned long long int arr_36 [18] [18] ;
unsigned int arr_3 [15] ;
signed char arr_6 [15] ;
signed char arr_22 [15] [15] [15] [15] [15] ;
long long int arr_28 [15] [15] [15] ;
int arr_38 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 3635726751U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 2432284363068707391ULL : 4418631435258668437ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -1046519130346505946LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = -1345967890;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)59834 : (unsigned short)14764;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 1311080716022582570LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)62713 : (unsigned short)11622;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? -1240222060 : 1597493945;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_36 [i_0] [i_1] = 16261059597938130059ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 419840521U : 437971064U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)-96 : (signed char)-88;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 8877577947234933111LL : 6322778909703910797LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_38 [i_0] = 1151600540;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
