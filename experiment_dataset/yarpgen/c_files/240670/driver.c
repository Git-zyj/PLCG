#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56289;
short var_1 = (short)25791;
long long int var_2 = -6886565711087761136LL;
unsigned short var_3 = (unsigned short)2567;
unsigned short var_4 = (unsigned short)40007;
unsigned char var_5 = (unsigned char)110;
unsigned short var_6 = (unsigned short)24575;
unsigned long long int var_7 = 12824744502946589390ULL;
int var_8 = 285285339;
short var_10 = (short)-20528;
_Bool var_11 = (_Bool)0;
short var_12 = (short)7737;
int zero = 0;
unsigned short var_13 = (unsigned short)23250;
unsigned short var_14 = (unsigned short)59122;
long long int var_15 = 3421209995162544518LL;
int var_16 = 375481136;
unsigned short var_17 = (unsigned short)35423;
int var_18 = 266498493;
unsigned short var_19 = (unsigned short)42934;
signed char var_20 = (signed char)-96;
unsigned short var_21 = (unsigned short)54737;
unsigned short var_22 = (unsigned short)9538;
int var_23 = 1143925793;
long long int var_24 = -3752683754323026967LL;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 16936988700839685656ULL;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)0;
signed char arr_11 [12] ;
unsigned long long int arr_19 [12] [12] ;
_Bool arr_23 [15] ;
unsigned long long int arr_24 [15] ;
_Bool arr_26 [15] ;
int arr_27 [15] [15] [15] ;
unsigned short arr_29 [15] ;
signed char arr_4 [12] [12] [12] ;
unsigned int arr_5 [12] [12] ;
unsigned short arr_8 [12] ;
long long int arr_9 [12] [12] ;
long long int arr_22 [12] [12] ;
long long int arr_25 [15] ;
long long int arr_35 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_19 [i_0] [i_1] = 2244867668492310681ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_24 [i_0] = 9348453715266694337ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_26 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 545911480;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_29 [i_0] = (unsigned short)7650;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 859444041U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned short)27000;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = -3477734390032967670LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_22 [i_0] [i_1] = 6324597425554106964LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = -7043410869875191887LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_35 [i_0] = -3216145583222811989LL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
