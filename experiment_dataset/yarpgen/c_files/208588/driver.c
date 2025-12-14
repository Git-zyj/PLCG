#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)10356;
unsigned long long int var_6 = 10957194165979348351ULL;
unsigned int var_7 = 3491876011U;
signed char var_9 = (signed char)60;
unsigned long long int var_10 = 7435836711334242566ULL;
unsigned short var_11 = (unsigned short)60584;
unsigned long long int var_12 = 8335462950895648009ULL;
unsigned long long int var_13 = 4065719897188251250ULL;
short var_14 = (short)-25566;
unsigned char var_15 = (unsigned char)10;
unsigned short var_16 = (unsigned short)63374;
int zero = 0;
long long int var_20 = -6431386523055441032LL;
unsigned long long int var_21 = 8679528005816038204ULL;
long long int var_22 = 710036816618894973LL;
signed char var_23 = (signed char)24;
unsigned short var_24 = (unsigned short)63472;
long long int var_25 = 4175815261457993110LL;
unsigned long long int var_26 = 17647322098946343740ULL;
signed char var_27 = (signed char)42;
int var_28 = -1662568050;
signed char arr_0 [10] ;
unsigned long long int arr_1 [10] ;
int arr_6 [10] [10] ;
unsigned long long int arr_8 [18] [18] ;
signed char arr_9 [18] ;
unsigned int arr_13 [16] [16] ;
long long int arr_18 [13] ;
unsigned long long int arr_2 [10] [10] ;
unsigned char arr_3 [10] ;
signed char arr_4 [10] [10] ;
unsigned long long int arr_7 [10] ;
unsigned short arr_10 [18] ;
long long int arr_14 [16] ;
unsigned long long int arr_15 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 13661159896464547075ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 1067711483;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = 11266020280366616478ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = 2662016486U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = 3674300737881002686LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 13992621646307054737ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 9916491890434671309ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)50924 : (unsigned short)25444;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = -5623987485557018004LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = 6997296057915807407ULL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
