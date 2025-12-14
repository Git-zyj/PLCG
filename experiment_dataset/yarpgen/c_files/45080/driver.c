#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27191;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 7161696755922893927ULL;
int var_3 = -1820570039;
_Bool var_4 = (_Bool)0;
int var_5 = -1223845276;
unsigned long long int var_8 = 4380353835457751569ULL;
int var_9 = 921478852;
unsigned char var_10 = (unsigned char)94;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)137;
signed char var_13 = (signed char)-28;
unsigned char var_15 = (unsigned char)243;
unsigned short var_17 = (unsigned short)30000;
int zero = 0;
unsigned int var_19 = 542310224U;
unsigned short var_20 = (unsigned short)56276;
short var_21 = (short)-4993;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 1273855012U;
unsigned long long int var_24 = 16419628687622895495ULL;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 2210328529910127889ULL;
int var_27 = 201066749;
_Bool var_28 = (_Bool)1;
unsigned long long int var_29 = 11655204325194852100ULL;
short var_30 = (short)10143;
signed char var_31 = (signed char)-4;
long long int var_32 = 925150440037060208LL;
_Bool var_33 = (_Bool)0;
unsigned int var_34 = 1048926809U;
int var_35 = 1750110588;
short var_36 = (short)5240;
unsigned long long int arr_0 [21] [21] ;
unsigned char arr_1 [21] ;
_Bool arr_2 [21] [21] ;
short arr_9 [21] [21] [21] ;
short arr_13 [10] [10] ;
long long int arr_21 [10] [10] [10] [10] ;
_Bool arr_24 [20] [20] ;
short arr_31 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 17622906726005577754ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)19246 : (short)-5126;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = (short)29246;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1122620747877557958LL : -1907507685896371383LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_24 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_31 [i_0] [i_1] = (short)19984;
}

void checksum() {
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
