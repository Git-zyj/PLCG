#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2055837327U;
long long int var_2 = -655728681911185431LL;
signed char var_3 = (signed char)51;
unsigned short var_4 = (unsigned short)48108;
unsigned short var_5 = (unsigned short)50114;
unsigned long long int var_7 = 15390655827144166470ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 15964757715731484044ULL;
unsigned short var_12 = (unsigned short)12823;
unsigned char var_14 = (unsigned char)24;
unsigned char var_15 = (unsigned char)57;
int zero = 0;
signed char var_16 = (signed char)-51;
unsigned long long int var_17 = 7671147918042850024ULL;
unsigned char var_18 = (unsigned char)9;
signed char var_19 = (signed char)31;
unsigned short var_20 = (unsigned short)29983;
unsigned int var_21 = 2574682595U;
long long int var_22 = -1685280663355038783LL;
int var_23 = 1731779715;
unsigned int var_24 = 3580733120U;
unsigned char var_25 = (unsigned char)25;
unsigned int var_26 = 2999543710U;
unsigned int var_27 = 2918738723U;
long long int var_28 = 8455961594838175738LL;
long long int var_29 = 202259978710794094LL;
long long int arr_0 [21] [21] ;
long long int arr_1 [21] [21] ;
unsigned long long int arr_2 [21] [21] [21] ;
unsigned int arr_3 [21] [21] [21] ;
short arr_6 [21] [21] [21] [21] ;
_Bool arr_8 [21] [21] [21] ;
short arr_10 [21] ;
unsigned char arr_21 [19] ;
unsigned long long int arr_24 [16] [16] ;
unsigned int arr_9 [21] [21] [21] [21] ;
short arr_15 [21] [21] [21] ;
signed char arr_18 [21] [21] [21] [21] ;
unsigned char arr_22 [19] ;
long long int arr_27 [16] ;
long long int arr_28 [16] ;
unsigned int arr_31 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -8055623939845077249LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 7773065614834653232LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 7673900177322149100ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2913459172U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)13687;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (short)-5720;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_21 [i_0] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_24 [i_0] [i_1] = 8821598626861034175ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 2869123980U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-21698 : (short)16998;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-15 : (signed char)105;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_22 [i_0] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_27 [i_0] = -5219705141306135661LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_28 [i_0] = -3104852568535023739LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_31 [i_0] [i_1] = (i_0 % 2 == 0) ? 76850582U : 876362308U;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
