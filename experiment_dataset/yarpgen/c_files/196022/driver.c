#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)81;
unsigned short var_1 = (unsigned short)14425;
_Bool var_2 = (_Bool)0;
long long int var_3 = 466026353762390581LL;
unsigned short var_4 = (unsigned short)30026;
unsigned int var_5 = 2017056055U;
unsigned int var_6 = 1136666412U;
long long int var_7 = 2428441811419923357LL;
long long int var_8 = 663810879766050732LL;
unsigned int var_9 = 809987718U;
long long int var_10 = 1594058815569349756LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)27869;
int var_13 = 1857756218;
unsigned short var_14 = (unsigned short)48230;
unsigned int var_15 = 3086354729U;
long long int var_16 = 970285956157321267LL;
short var_17 = (short)-17337;
unsigned char var_18 = (unsigned char)120;
long long int var_19 = 8965696981667846400LL;
int var_20 = 319003194;
long long int var_21 = -7426619407922329789LL;
short var_22 = (short)2855;
int var_23 = 1201354431;
int var_24 = -878907339;
unsigned char var_25 = (unsigned char)77;
short var_26 = (short)-3756;
long long int var_27 = -1310705319439238976LL;
unsigned long long int var_28 = 8881485187033670052ULL;
int var_29 = 2078084266;
int var_30 = 791113875;
int arr_0 [11] ;
unsigned char arr_1 [11] ;
long long int arr_2 [11] ;
unsigned int arr_4 [11] [11] [11] ;
signed char arr_6 [11] [11] ;
unsigned char arr_7 [11] ;
signed char arr_8 [11] [11] [11] ;
unsigned long long int arr_9 [11] [11] [11] [11] ;
unsigned char arr_10 [11] [11] [11] [11] ;
unsigned char arr_12 [11] [11] [11] [11] ;
unsigned char arr_14 [11] [11] [11] [11] ;
long long int arr_15 [11] ;
int arr_20 [11] [11] [11] ;
short arr_22 [11] [11] [11] ;
unsigned char arr_26 [11] [11] ;
signed char arr_30 [11] ;
int arr_40 [11] [11] ;
unsigned char arr_47 [11] [11] ;
unsigned short arr_5 [11] [11] [11] ;
_Bool arr_11 [11] ;
signed char arr_24 [11] ;
short arr_28 [11] ;
long long int arr_29 [11] ;
unsigned short arr_36 [11] [11] ;
int arr_41 [11] ;
unsigned long long int arr_44 [11] [11] ;
int arr_51 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1746909783;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -7845099879289810172LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2709955641U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 6280607620986492076ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = -8137570302040053373LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 995712781;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (short)-13406;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_30 [i_0] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_40 [i_0] [i_1] = -458338627;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_47 [i_0] [i_1] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)334;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_24 [i_0] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_28 [i_0] = (short)-14163;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_29 [i_0] = -952084606018485415LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_36 [i_0] [i_1] = (unsigned short)33045;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_41 [i_0] = -1204448848;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_44 [i_0] [i_1] = 12741340973717893631ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_51 [i_0] = 763737147;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_44 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_51 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
