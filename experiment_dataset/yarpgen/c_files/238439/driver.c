#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3964124660U;
signed char var_1 = (signed char)-60;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 14637962472581956867ULL;
long long int var_7 = -4023049322022500215LL;
unsigned short var_9 = (unsigned short)35406;
int var_11 = 900198092;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-53;
long long int var_14 = -6692166841653677558LL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)143;
long long int var_17 = 7172506745323774884LL;
signed char var_18 = (signed char)110;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)64;
int var_21 = -2056029359;
unsigned long long int arr_1 [14] [14] ;
unsigned short arr_2 [16] ;
int arr_3 [16] ;
int arr_4 [16] [16] [16] ;
unsigned char arr_10 [16] ;
unsigned char arr_17 [16] ;
int arr_18 [16] [16] [16] ;
signed char arr_19 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 82566646984438771ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)47574;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 1402426704;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1977900759 : 1559963270;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned char)35 : (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1135707145 : 525810199;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = (signed char)-119;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
