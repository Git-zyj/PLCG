#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6209194178919892854ULL;
short var_1 = (short)20062;
signed char var_3 = (signed char)95;
int var_6 = -2023542543;
long long int var_8 = 8846036925346391400LL;
unsigned short var_10 = (unsigned short)14839;
long long int var_11 = -571725420287264580LL;
long long int var_12 = -6992471017987664636LL;
int var_14 = -1224525052;
long long int var_17 = -1743250038692976471LL;
short var_19 = (short)19390;
int zero = 0;
unsigned long long int var_20 = 10472069121197866178ULL;
unsigned short var_21 = (unsigned short)25960;
unsigned short var_22 = (unsigned short)44766;
signed char var_23 = (signed char)127;
unsigned short var_24 = (unsigned short)64248;
signed char var_25 = (signed char)124;
signed char var_26 = (signed char)7;
signed char var_27 = (signed char)95;
signed char var_28 = (signed char)10;
unsigned short var_29 = (unsigned short)63045;
signed char var_30 = (signed char)22;
unsigned short var_31 = (unsigned short)65175;
long long int var_32 = -8134194025700916822LL;
unsigned int var_33 = 4105780575U;
long long int var_34 = 8971140898400152211LL;
short var_35 = (short)-25422;
unsigned long long int var_36 = 8602339024820168666ULL;
int arr_0 [13] [13] ;
short arr_1 [13] ;
unsigned short arr_3 [13] ;
long long int arr_4 [13] ;
short arr_8 [13] [13] ;
int arr_9 [13] ;
unsigned long long int arr_10 [14] [14] ;
signed char arr_11 [14] ;
unsigned int arr_12 [14] ;
unsigned short arr_15 [20] ;
unsigned short arr_2 [13] [13] ;
signed char arr_5 [13] [13] [13] ;
int arr_6 [13] [13] ;
_Bool arr_14 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = -1999607813;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)-5256;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)64898;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -6333838590024150915LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-9266;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 580778402;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = 7426954483037971301ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = 3907402685U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (unsigned short)37698;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)5592;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 306182679;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
