#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22946;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 11870638696563618976ULL;
_Bool var_5 = (_Bool)1;
int var_7 = 1556771678;
int var_8 = 28854610;
signed char var_11 = (signed char)-83;
int var_14 = -459035181;
unsigned char var_16 = (unsigned char)119;
_Bool var_17 = (_Bool)0;
int var_18 = 1531872275;
int zero = 0;
unsigned char var_19 = (unsigned char)110;
unsigned long long int var_20 = 16008152520877544402ULL;
signed char var_21 = (signed char)15;
unsigned long long int var_22 = 16071471146217699770ULL;
int var_23 = -222303829;
short var_24 = (short)-21829;
unsigned char var_25 = (unsigned char)52;
unsigned char var_26 = (unsigned char)231;
unsigned long long int var_27 = 777056733291554938ULL;
_Bool var_28 = (_Bool)0;
unsigned char var_29 = (unsigned char)80;
int var_30 = -278387389;
unsigned int var_31 = 3975037792U;
signed char var_32 = (signed char)94;
unsigned int var_33 = 3567039991U;
signed char var_34 = (signed char)-104;
unsigned int arr_2 [12] ;
unsigned short arr_3 [12] ;
int arr_5 [12] [12] ;
signed char arr_7 [12] ;
unsigned int arr_8 [14] ;
int arr_9 [14] ;
unsigned int arr_10 [14] [14] [14] ;
unsigned long long int arr_11 [14] ;
unsigned char arr_12 [21] [21] ;
int arr_13 [21] ;
short arr_15 [21] ;
long long int arr_16 [21] [21] [21] ;
int arr_17 [21] [21] [21] ;
int arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1904123045U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)14844;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 1541554377;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 3635489548U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = -1696816173;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 1675602737U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 17881286258140682099ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = -599072893;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (short)-30804 : (short)-9992;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1094054426930030544LL : -5969157768917783641LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = -1474223367;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -1301908318 : -543264734;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
