#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)5139;
signed char var_9 = (signed char)-10;
unsigned int var_11 = 584895323U;
signed char var_13 = (signed char)-81;
signed char var_14 = (signed char)-58;
int var_15 = -448383254;
long long int var_16 = -5782575790959921419LL;
unsigned char var_17 = (unsigned char)254;
signed char var_18 = (signed char)-67;
unsigned char var_19 = (unsigned char)249;
int zero = 0;
signed char var_20 = (signed char)84;
signed char var_21 = (signed char)109;
unsigned long long int var_22 = 15858142725029734087ULL;
signed char var_23 = (signed char)91;
signed char var_24 = (signed char)(-127 - 1);
signed char var_25 = (signed char)-84;
unsigned int var_26 = 2543101329U;
unsigned short var_27 = (unsigned short)44130;
long long int var_28 = 1931544427094573965LL;
unsigned long long int arr_0 [15] ;
signed char arr_1 [15] ;
unsigned int arr_2 [15] ;
_Bool arr_3 [13] ;
long long int arr_7 [14] ;
unsigned long long int arr_10 [14] [14] [14] ;
unsigned int arr_11 [14] [14] [14] [14] ;
unsigned int arr_12 [14] [14] [14] ;
_Bool arr_15 [12] ;
_Bool arr_17 [12] ;
short arr_18 [12] ;
unsigned long long int arr_5 [13] [13] ;
short arr_13 [14] ;
int arr_14 [14] ;
signed char arr_19 [12] ;
unsigned int arr_20 [12] ;
unsigned char arr_21 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 15636669524812111194ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 409373185U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = -3845946080653783132LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 8033965231013482894ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 4071216211U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 4245115634U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = (short)3107;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 14236112450894321838ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)26092 : (short)-23100;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? -102948294 : 2077054733;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = 275849964U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = (unsigned char)168;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
