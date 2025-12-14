#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7634991143322630689ULL;
unsigned char var_1 = (unsigned char)32;
short var_2 = (short)26078;
signed char var_4 = (signed char)-36;
long long int var_5 = 2934174411577377359LL;
unsigned short var_7 = (unsigned short)11754;
long long int var_8 = -3439761648093897107LL;
unsigned long long int var_9 = 2950253862320918795ULL;
short var_10 = (short)-16319;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -2017520992923906966LL;
long long int var_13 = -1418032447772017764LL;
unsigned long long int var_14 = 4801930040690259933ULL;
unsigned int var_15 = 2447774429U;
int var_16 = -10057106;
long long int var_17 = -5224142940088139306LL;
long long int var_18 = 5916924651470541877LL;
unsigned int var_19 = 2823489167U;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)66;
unsigned long long int var_22 = 1650393357934242547ULL;
unsigned short var_23 = (unsigned short)64332;
int var_24 = 30807080;
unsigned int var_25 = 3166418957U;
signed char var_26 = (signed char)-43;
unsigned int var_27 = 2463136508U;
unsigned char var_28 = (unsigned char)243;
unsigned int arr_0 [19] [19] ;
short arr_1 [19] ;
int arr_3 [19] [19] ;
signed char arr_4 [19] [19] [19] ;
unsigned int arr_5 [19] [19] [19] ;
unsigned short arr_6 [19] [19] ;
unsigned char arr_7 [19] [19] [19] [19] ;
int arr_8 [19] [19] [19] [19] ;
unsigned short arr_11 [22] [22] ;
unsigned int arr_12 [22] ;
short arr_20 [16] ;
long long int arr_23 [16] [16] [16] ;
short arr_29 [16] [16] ;
int arr_40 [16] ;
unsigned short arr_2 [19] ;
signed char arr_9 [19] ;
_Bool arr_10 [19] ;
unsigned char arr_18 [18] ;
_Bool arr_30 [16] [16] [16] ;
short arr_44 [16] [16] [16] ;
long long int arr_45 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 2392116759U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)-23033;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = -1921971841;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)33;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1773486147U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)24178;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)198 : (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -317726118;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)56404 : (unsigned short)52458;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = 3356723303U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (short)13799;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = -3023474897639795912LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_29 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)9336 : (short)29584;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? 715789471 : -19541795;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)2599;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-12732 : (short)-14226;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? -8845694836462752593LL : 5023425103506301711LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_44 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_45 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
