#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34661;
unsigned long long int var_2 = 13740797298372459301ULL;
unsigned long long int var_4 = 16717285179801882314ULL;
unsigned short var_5 = (unsigned short)15925;
unsigned short var_6 = (unsigned short)52349;
int zero = 0;
unsigned long long int var_13 = 7037675853334014133ULL;
unsigned short var_14 = (unsigned short)32118;
unsigned char var_15 = (unsigned char)187;
signed char var_16 = (signed char)125;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-24198;
signed char var_19 = (signed char)72;
unsigned char var_20 = (unsigned char)119;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-35;
long long int arr_0 [15] ;
short arr_1 [15] [15] ;
unsigned long long int arr_3 [15] [15] ;
long long int arr_6 [15] [15] [15] [15] ;
unsigned long long int arr_8 [15] [15] [15] ;
int arr_12 [23] ;
signed char arr_13 [23] ;
long long int arr_14 [23] ;
short arr_15 [23] [23] ;
unsigned short arr_18 [23] [23] [23] ;
unsigned int arr_20 [23] [23] [23] ;
long long int arr_23 [21] ;
signed char arr_2 [15] ;
long long int arr_9 [15] ;
unsigned short arr_10 [15] ;
int arr_21 [23] ;
int arr_24 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1530288448444849038LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-19904;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 1510085812550646330ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -4528462712784343801LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 6352338437891733824ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = -2092171173;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = -307475468122092809LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = (short)9749;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned short)31750;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 948397360U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = 6814203476594527570LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = -6556720904039491926LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (unsigned short)24381;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = -450398765;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_24 [i_0] [i_1] = 44018859;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
