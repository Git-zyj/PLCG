#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)72;
unsigned long long int var_3 = 16296888808299257072ULL;
int var_8 = 586993212;
signed char var_9 = (signed char)7;
unsigned int var_10 = 3859753623U;
long long int var_11 = 744813363357841137LL;
short var_14 = (short)27230;
int zero = 0;
unsigned int var_17 = 3331404199U;
unsigned int var_18 = 1376395095U;
unsigned short var_19 = (unsigned short)16645;
unsigned int var_20 = 2128333951U;
unsigned short var_21 = (unsigned short)40833;
unsigned char var_22 = (unsigned char)48;
int var_23 = 1405192533;
int var_24 = 775455113;
signed char var_25 = (signed char)54;
signed char var_26 = (signed char)42;
long long int var_27 = 6556748911654473157LL;
unsigned short arr_1 [12] ;
unsigned short arr_2 [12] ;
unsigned short arr_8 [13] ;
unsigned short arr_14 [18] [18] ;
long long int arr_16 [23] [23] ;
signed char arr_17 [23] ;
short arr_3 [12] ;
unsigned long long int arr_7 [12] ;
unsigned short arr_12 [13] ;
unsigned short arr_15 [18] ;
unsigned int arr_18 [23] [23] ;
unsigned char arr_19 [23] ;
int arr_20 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)19418;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)21317;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)5445 : (unsigned short)20420;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)29721;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = 213941155166490310LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (signed char)118 : (signed char)75;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)17161;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 5003057430180510105ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)50636 : (unsigned short)31226;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42474 : (unsigned short)14503;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? 2684950563U : 3571724835U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned char)222 : (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? -1504391439 : -386739835;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
