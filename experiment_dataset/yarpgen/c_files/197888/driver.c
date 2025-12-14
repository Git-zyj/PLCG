#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)9;
unsigned char var_2 = (unsigned char)182;
unsigned long long int var_4 = 13463551714268177572ULL;
unsigned int var_5 = 1619996413U;
unsigned int var_6 = 1763766830U;
unsigned int var_7 = 3315884003U;
long long int var_9 = 7266828958433855887LL;
unsigned long long int var_10 = 2053476974441572359ULL;
int var_11 = 146175746;
unsigned int var_13 = 497053991U;
int zero = 0;
unsigned int var_15 = 2905080843U;
unsigned char var_16 = (unsigned char)126;
signed char var_17 = (signed char)-77;
unsigned long long int var_18 = 17789845241243384696ULL;
unsigned char var_19 = (unsigned char)200;
unsigned long long int var_20 = 11196907275293573746ULL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1721669743U;
unsigned long long int var_23 = 3239016597875718650ULL;
unsigned long long int var_24 = 662319402851608947ULL;
signed char var_25 = (signed char)50;
unsigned char arr_1 [13] ;
long long int arr_2 [16] ;
unsigned char arr_3 [16] [16] ;
unsigned int arr_4 [16] ;
unsigned int arr_5 [16] ;
unsigned long long int arr_7 [16] [16] [16] ;
unsigned int arr_8 [16] ;
_Bool arr_9 [16] [16] ;
_Bool arr_11 [16] [16] [16] ;
unsigned char arr_17 [23] [23] ;
unsigned long long int arr_18 [23] ;
_Bool arr_19 [23] [23] ;
_Bool arr_6 [16] [16] ;
unsigned int arr_15 [16] [16] ;
signed char arr_16 [16] [16] [16] [16] [16] [16] ;
unsigned int arr_20 [23] ;
short arr_21 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -5234048042468254597LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 3287667309U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 3869355847U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 12597268913524238076ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 590487328U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = 18028856543051916361ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_19 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = 4134311276U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = 4103234170U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = (short)-984;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
