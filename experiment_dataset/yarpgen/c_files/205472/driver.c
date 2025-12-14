#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)117;
_Bool var_5 = (_Bool)0;
long long int var_6 = 6865292525672497794LL;
unsigned char var_7 = (unsigned char)206;
long long int var_8 = -387001820060068087LL;
signed char var_9 = (signed char)-61;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)252;
signed char var_12 = (signed char)-9;
int zero = 0;
long long int var_13 = 4846887307119877161LL;
_Bool var_14 = (_Bool)1;
long long int var_15 = 585554429188327553LL;
unsigned char var_16 = (unsigned char)7;
_Bool var_17 = (_Bool)1;
long long int var_18 = -5469025391378542278LL;
signed char var_19 = (signed char)-38;
signed char var_20 = (signed char)108;
unsigned char var_21 = (unsigned char)164;
signed char var_22 = (signed char)-75;
unsigned char var_23 = (unsigned char)56;
long long int var_24 = 3818942619114873951LL;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)1;
long long int var_27 = 3411669337298050108LL;
signed char var_28 = (signed char)27;
signed char var_29 = (signed char)82;
_Bool var_30 = (_Bool)1;
_Bool var_31 = (_Bool)0;
_Bool var_32 = (_Bool)0;
unsigned char arr_0 [12] [12] ;
long long int arr_1 [12] [12] ;
long long int arr_2 [12] ;
_Bool arr_3 [12] [12] ;
long long int arr_6 [12] ;
unsigned char arr_10 [12] ;
long long int arr_15 [12] ;
unsigned char arr_17 [12] [12] [12] [12] ;
long long int arr_4 [12] ;
signed char arr_5 [12] ;
unsigned char arr_8 [12] [12] ;
long long int arr_23 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = -2478160040907073736LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -1382341987865468023LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 1502517048256405904LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = -6597654764886612953LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 6522282637022474878LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 7415363527881851909LL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
