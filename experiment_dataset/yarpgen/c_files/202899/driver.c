#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4063682067454470985LL;
short var_1 = (short)-8496;
long long int var_3 = -3941477605305739061LL;
short var_4 = (short)28571;
unsigned int var_5 = 2105619876U;
unsigned long long int var_7 = 13418008219788858697ULL;
short var_9 = (short)6080;
unsigned int var_11 = 3509915663U;
signed char var_12 = (signed char)96;
signed char var_14 = (signed char)50;
unsigned char var_15 = (unsigned char)72;
short var_16 = (short)-10620;
unsigned int var_17 = 784958451U;
int zero = 0;
short var_18 = (short)11650;
unsigned short var_19 = (unsigned short)51817;
unsigned long long int var_20 = 13360643305180264663ULL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 8165740345254761188ULL;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)13110;
unsigned char var_26 = (unsigned char)123;
signed char var_27 = (signed char)74;
long long int var_28 = -1496510645480464729LL;
unsigned long long int var_29 = 1743729598061553910ULL;
_Bool var_30 = (_Bool)0;
unsigned short var_31 = (unsigned short)46673;
long long int var_32 = -7288209222763285587LL;
unsigned short var_33 = (unsigned short)33834;
unsigned long long int var_34 = 12216992063478761149ULL;
unsigned short arr_1 [24] [24] ;
unsigned char arr_2 [24] ;
int arr_3 [24] [24] [24] ;
_Bool arr_4 [24] [24] [24] ;
unsigned char arr_5 [24] ;
unsigned short arr_7 [24] [24] ;
unsigned short arr_9 [24] ;
unsigned short arr_12 [24] ;
unsigned short arr_13 [24] [24] ;
unsigned short arr_14 [24] [24] [24] ;
unsigned char arr_19 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)59579;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -672013054;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)22143;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned short)65304;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)53191 : (unsigned short)7242;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)54269;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)50203 : (unsigned short)62097;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned char)40 : (unsigned char)75;
}

void checksum() {
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
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
