#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)219;
signed char var_2 = (signed char)16;
unsigned short var_3 = (unsigned short)43846;
unsigned char var_4 = (unsigned char)53;
_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 3142994961829135848ULL;
unsigned short var_11 = (unsigned short)12988;
signed char var_12 = (signed char)-118;
signed char var_13 = (signed char)-6;
int zero = 0;
short var_14 = (short)-26067;
signed char var_15 = (signed char)97;
long long int var_16 = 1745588621537327185LL;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2915588942U;
_Bool var_19 = (_Bool)0;
int var_20 = -543258932;
unsigned short var_21 = (unsigned short)16376;
unsigned long long int var_22 = 3743790973948711400ULL;
short var_23 = (short)25256;
unsigned short var_24 = (unsigned short)13191;
unsigned short arr_0 [18] ;
short arr_1 [18] ;
signed char arr_2 [18] ;
unsigned char arr_3 [18] [18] ;
unsigned char arr_4 [18] ;
unsigned int arr_6 [18] [18] [18] ;
unsigned long long int arr_7 [18] [18] [18] ;
unsigned short arr_9 [18] ;
int arr_10 [18] ;
_Bool arr_14 [18] ;
short arr_5 [18] [18] [18] ;
unsigned char arr_12 [18] [18] [18] ;
short arr_18 [18] ;
unsigned char arr_19 [18] ;
unsigned char arr_20 [18] [18] ;
signed char arr_21 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)12443;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)22458;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)243 : (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2912980448U : 786602011U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 8258700256269000889ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (unsigned short)6899;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = 36968478;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-8400 : (short)27901;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)186 : (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (short)30620 : (short)-18106;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned char)103 : (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)118 : (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)41 : (signed char)-25;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
