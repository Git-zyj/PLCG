#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2269188499066500857ULL;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 3641750952U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 6481955009830805100ULL;
long long int var_8 = 4786561259617109721LL;
unsigned long long int var_11 = 15766781319327748746ULL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-22660;
long long int var_17 = 8858328360266035035LL;
int zero = 0;
unsigned long long int var_19 = 11278335542956723397ULL;
unsigned long long int var_20 = 10033122159875742357ULL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
short var_23 = (short)31723;
unsigned long long int var_24 = 3193926615039131632ULL;
unsigned long long int var_25 = 9499623196284204965ULL;
short var_26 = (short)17784;
short var_27 = (short)31939;
unsigned long long int var_28 = 15254762182830672549ULL;
unsigned int var_29 = 878784621U;
unsigned long long int var_30 = 13166352094284833ULL;
unsigned long long int var_31 = 1159324790478550891ULL;
long long int var_32 = -4665924084905720785LL;
_Bool var_33 = (_Bool)1;
unsigned long long int var_34 = 9382035751356927023ULL;
unsigned int var_35 = 2424664218U;
unsigned long long int var_36 = 15398863617250629257ULL;
unsigned long long int var_37 = 8008032569052794249ULL;
_Bool var_38 = (_Bool)0;
unsigned long long int var_39 = 1967992924631206726ULL;
unsigned long long int var_40 = 10612491354249093088ULL;
short var_41 = (short)-10248;
unsigned long long int var_42 = 4926344486030235307ULL;
unsigned long long int arr_4 [22] ;
unsigned int arr_5 [22] ;
short arr_6 [22] [22] ;
unsigned long long int arr_7 [22] ;
unsigned long long int arr_12 [22] [22] ;
short arr_18 [22] ;
short arr_20 [22] [22] ;
short arr_24 [22] ;
short arr_26 [22] ;
short arr_28 [22] ;
_Bool arr_30 [22] [22] ;
long long int arr_41 [22] ;
long long int arr_3 [13] ;
unsigned long long int arr_9 [22] ;
short arr_10 [22] [22] ;
_Bool arr_13 [22] [22] [22] ;
unsigned long long int arr_17 [22] ;
unsigned long long int arr_23 [22] [22] [22] [22] [22] ;
unsigned long long int arr_27 [22] ;
unsigned int arr_42 [22] [22] [22] ;
unsigned int arr_49 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 13032182101441700179ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 3173176186U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)1939 : (short)24862;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 3687512365606820936ULL : 3659509041172223978ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = 3193519659195890854ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (short)-16763 : (short)31499;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_20 [i_0] [i_1] = (short)15897;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = (short)24676;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (short)-2941 : (short)-27052;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (short)15165 : (short)-30339;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_30 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_41 [i_0] = (i_0 % 2 == 0) ? -8735515082599805734LL : 10629164244952897LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -1396620498421124321LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 18382751837293613428ULL : 338480770541376492ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)20764 : (short)-17783;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 10519455220005457912ULL : 6887235312845593656ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 6200853752499050628ULL : 14274816346903826762ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 5438287032782471731ULL : 9989508533569961677ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 856859367U : 3310715625U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_49 [i_0] [i_1] = (i_0 % 2 == 0) ? 3869908056U : 1065279661U;
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_49 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
