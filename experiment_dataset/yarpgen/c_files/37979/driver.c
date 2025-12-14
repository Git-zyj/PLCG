#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-64;
unsigned long long int var_1 = 14323983547060477492ULL;
short var_5 = (short)30813;
unsigned int var_6 = 769808450U;
_Bool var_7 = (_Bool)1;
unsigned short var_12 = (unsigned short)8568;
long long int var_13 = -5473015584102249150LL;
signed char var_14 = (signed char)-125;
signed char var_15 = (signed char)92;
signed char var_16 = (signed char)-46;
int zero = 0;
unsigned char var_17 = (unsigned char)53;
signed char var_18 = (signed char)73;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-7680;
_Bool var_21 = (_Bool)1;
long long int var_22 = -7455720633244558159LL;
long long int var_23 = 634846014491387866LL;
unsigned long long int var_24 = 18167475312362469390ULL;
short var_25 = (short)995;
unsigned short var_26 = (unsigned short)3170;
unsigned short var_27 = (unsigned short)39813;
unsigned char var_28 = (unsigned char)101;
signed char arr_1 [17] [17] ;
unsigned short arr_13 [19] ;
unsigned long long int arr_19 [19] ;
_Bool arr_2 [17] [17] ;
unsigned char arr_3 [17] ;
unsigned int arr_9 [19] ;
int arr_10 [19] [19] ;
unsigned char arr_15 [19] [19] ;
short arr_16 [19] ;
unsigned char arr_23 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)41006 : (unsigned short)56517;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = 15427938875554364308ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 2777495961U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = 1529113711;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)98 : (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (short)-3481;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned char)107;
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
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
