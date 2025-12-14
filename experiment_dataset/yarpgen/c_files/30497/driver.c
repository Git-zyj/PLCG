#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2338492664520429378LL;
unsigned long long int var_2 = 181152181970083655ULL;
unsigned long long int var_3 = 6743867857802465053ULL;
long long int var_4 = -7270159947389965154LL;
long long int var_5 = 3552581623797006335LL;
unsigned int var_6 = 4100933990U;
unsigned long long int var_7 = 16920766872799943127ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 11681741254097593131ULL;
int var_10 = 60002830;
unsigned short var_11 = (unsigned short)65468;
unsigned short var_12 = (unsigned short)44923;
int zero = 0;
unsigned short var_13 = (unsigned short)57345;
unsigned short var_14 = (unsigned short)53402;
signed char var_15 = (signed char)-20;
unsigned int var_16 = 1360112202U;
unsigned long long int var_17 = 17959732205556768076ULL;
int var_18 = -71254255;
int var_19 = 446247410;
unsigned short var_20 = (unsigned short)30468;
unsigned short var_21 = (unsigned short)24480;
int var_22 = 68346054;
signed char var_23 = (signed char)-93;
unsigned short var_24 = (unsigned short)3867;
unsigned long long int var_25 = 4267186175978888105ULL;
unsigned int var_26 = 4032901902U;
unsigned short var_27 = (unsigned short)11947;
unsigned int var_28 = 1238269710U;
unsigned int var_29 = 2921504780U;
unsigned short var_30 = (unsigned short)41017;
long long int var_31 = 8231413438635848370LL;
_Bool var_32 = (_Bool)0;
unsigned long long int var_33 = 7113768254850934300ULL;
long long int arr_0 [13] ;
int arr_1 [13] ;
signed char arr_2 [13] ;
long long int arr_6 [13] ;
signed char arr_8 [24] [24] ;
long long int arr_10 [24] [24] [24] ;
unsigned char arr_12 [24] [24] [24] [24] ;
unsigned short arr_13 [24] [24] [24] [24] ;
unsigned long long int arr_14 [24] [24] [24] [24] ;
unsigned long long int arr_15 [24] [24] [24] [24] [24] ;
signed char arr_21 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -2185675952615622399LL : -8441808108917652101LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -824610377 : -338429745;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -6810270714786879642LL : -8180311578588721995LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 7770440767138732065LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)18465;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 23297888858947689ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = 7648171990966611483ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)-122;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
