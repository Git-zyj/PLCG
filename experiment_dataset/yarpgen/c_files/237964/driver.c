#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)72;
unsigned short var_2 = (unsigned short)45107;
unsigned short var_3 = (unsigned short)11655;
unsigned int var_4 = 1728823197U;
unsigned char var_5 = (unsigned char)203;
long long int var_6 = 6924516028677433156LL;
unsigned char var_9 = (unsigned char)134;
int var_12 = 1767531841;
unsigned short var_13 = (unsigned short)31609;
unsigned int var_14 = 373950007U;
int var_16 = 619293033;
int zero = 0;
int var_17 = 331366683;
int var_18 = 829392931;
signed char var_19 = (signed char)-80;
long long int var_20 = -4462157193936654823LL;
signed char var_21 = (signed char)-119;
unsigned short var_22 = (unsigned short)6081;
int var_23 = 1310166191;
unsigned int var_24 = 1026719764U;
unsigned int var_25 = 135287628U;
unsigned short var_26 = (unsigned short)50479;
long long int var_27 = -1009486478531637302LL;
unsigned char var_28 = (unsigned char)5;
long long int var_29 = -5537545193252699620LL;
unsigned short var_30 = (unsigned short)37325;
unsigned short var_31 = (unsigned short)41613;
unsigned short var_32 = (unsigned short)31654;
long long int var_33 = -5379023101550042472LL;
signed char var_34 = (signed char)-83;
signed char var_35 = (signed char)-17;
long long int arr_0 [10] [10] ;
long long int arr_1 [10] ;
signed char arr_2 [10] [10] ;
unsigned short arr_4 [20] [20] ;
unsigned short arr_5 [20] [20] ;
signed char arr_8 [24] [24] ;
long long int arr_9 [24] ;
unsigned short arr_10 [24] [24] ;
int arr_22 [24] [24] ;
long long int arr_27 [24] ;
unsigned short arr_28 [24] [24] [24] ;
signed char arr_30 [24] [24] [24] ;
unsigned int arr_31 [24] [24] [24] ;
unsigned char arr_6 [20] ;
unsigned short arr_7 [20] ;
unsigned short arr_11 [24] ;
int arr_16 [24] [24] ;
unsigned short arr_20 [24] [24] ;
unsigned short arr_21 [24] [24] ;
unsigned short arr_24 [24] [24] ;
unsigned char arr_32 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = -3516652880183718526LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -5726514679455962959LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)23660;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)29475;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -3131165923747277218LL : 6481609845434717203LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)21539;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_22 [i_0] [i_1] = -70964205;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_27 [i_0] = 6467087345254037661LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (unsigned short)62507;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = 1045656808U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned short)52523;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)52000 : (unsigned short)61376;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? -517672119 : 1222752647;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)59378 : (unsigned short)8149;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)28963 : (unsigned short)49345;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned short)33289;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_32 [i_0] = (unsigned char)156;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
