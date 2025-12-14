#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24713;
short var_1 = (short)14462;
int var_2 = 775277885;
short var_4 = (short)30679;
unsigned long long int var_7 = 15804569633848658352ULL;
long long int var_8 = 3966577628970746640LL;
int var_9 = -41520508;
short var_10 = (short)-22812;
int var_11 = 777132081;
short var_12 = (short)13948;
unsigned long long int var_13 = 14994987310820334980ULL;
unsigned long long int var_15 = 8350764273337730200ULL;
long long int var_16 = -5948819361491549192LL;
short var_17 = (short)29061;
long long int var_18 = -4779192414734726815LL;
int zero = 0;
long long int var_19 = -5568722824837119545LL;
int var_20 = 1488614514;
int var_21 = 1476471716;
long long int var_22 = -7862906497120657828LL;
long long int var_23 = -8361549652757036796LL;
int var_24 = 279899227;
short var_25 = (short)-10623;
unsigned long long int var_26 = 14884901554611950756ULL;
long long int var_27 = -1039739197008896220LL;
short var_28 = (short)4009;
short var_29 = (short)198;
short var_30 = (short)22083;
short var_31 = (short)26611;
short var_32 = (short)-32246;
short var_33 = (short)26179;
short var_34 = (short)7070;
unsigned long long int arr_1 [13] ;
unsigned long long int arr_4 [16] [16] ;
short arr_6 [15] [15] ;
long long int arr_7 [15] ;
short arr_9 [15] [15] ;
short arr_11 [15] ;
int arr_17 [15] [15] [15] ;
long long int arr_21 [22] ;
long long int arr_23 [22] [22] ;
short arr_26 [22] [22] ;
short arr_2 [13] ;
long long int arr_5 [16] ;
unsigned long long int arr_8 [15] ;
unsigned long long int arr_18 [15] ;
int arr_19 [15] [15] [15] ;
unsigned long long int arr_20 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 3671520709589147003ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 4391238913774925455ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-9156;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = -5893624981582788158LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (short)29521;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (short)-16988;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 1202915698;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = 2777853794620896521LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_23 [i_0] [i_1] = -7911906326351707808LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_26 [i_0] [i_1] = (short)12313;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)-17024;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 4497215369748422516LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 17556284588816652289ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = 18047912631384581354ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 1337085162;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_20 [i_0] [i_1] = 8099477040309206914ULL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
