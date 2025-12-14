#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16230;
int var_1 = -1220452812;
unsigned short var_2 = (unsigned short)56640;
signed char var_3 = (signed char)-121;
unsigned short var_4 = (unsigned short)20828;
signed char var_5 = (signed char)-15;
unsigned short var_6 = (unsigned short)52542;
signed char var_7 = (signed char)-33;
unsigned short var_8 = (unsigned short)19893;
long long int var_9 = -5455521035921743722LL;
unsigned short var_10 = (unsigned short)29819;
int var_11 = -1843500350;
int var_12 = -81359268;
int zero = 0;
unsigned short var_13 = (unsigned short)10310;
unsigned long long int var_14 = 4531518407152372515ULL;
unsigned long long int var_15 = 8587227840625486729ULL;
unsigned long long int var_16 = 9310242255590461271ULL;
unsigned short var_17 = (unsigned short)55796;
long long int var_18 = -2886717023810611014LL;
unsigned short var_19 = (unsigned short)28908;
unsigned short var_20 = (unsigned short)24887;
long long int var_21 = -3034090309165020245LL;
unsigned short var_22 = (unsigned short)9586;
unsigned short var_23 = (unsigned short)52742;
long long int var_24 = -7355586862643152047LL;
unsigned long long int var_25 = 12292376680368516511ULL;
signed char var_26 = (signed char)109;
unsigned short var_27 = (unsigned short)58471;
short var_28 = (short)13379;
unsigned long long int var_29 = 6037156467663284283ULL;
unsigned short var_30 = (unsigned short)42784;
unsigned short var_31 = (unsigned short)35118;
unsigned short arr_0 [13] [13] ;
signed char arr_1 [13] ;
unsigned short arr_2 [13] [13] ;
unsigned short arr_3 [13] [13] [13] ;
int arr_4 [13] ;
int arr_5 [13] [13] ;
unsigned short arr_6 [13] [13] ;
short arr_7 [13] [13] ;
unsigned long long int arr_8 [13] [13] [13] ;
unsigned short arr_9 [13] ;
unsigned short arr_10 [13] [13] ;
short arr_12 [13] [13] ;
short arr_13 [13] [13] [13] [13] ;
unsigned short arr_14 [11] ;
short arr_11 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)34317;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-67 : (signed char)13;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)64820 : (unsigned short)33594;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)38570;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 837087521;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 939489136 : -2030887862;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)40499;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)7873 : (short)-23290;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 17932345875828654238ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (unsigned short)6223;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)56697 : (unsigned short)28258;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)13307 : (short)-5291;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-29344 : (short)-31271;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (unsigned short)56571;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)21505 : (short)21633;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
