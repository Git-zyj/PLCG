#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 136999479108823607ULL;
short var_1 = (short)21988;
long long int var_6 = 8165544490942749912LL;
int var_10 = 57203685;
int zero = 0;
unsigned char var_12 = (unsigned char)166;
int var_13 = 497788860;
short var_14 = (short)18680;
unsigned long long int var_15 = 17386601456546502540ULL;
int var_16 = -713450992;
signed char var_17 = (signed char)-19;
long long int var_18 = 7261720489347615680LL;
unsigned long long int var_19 = 341461614883025889ULL;
unsigned long long int var_20 = 11163597295104596363ULL;
_Bool var_21 = (_Bool)0;
unsigned char arr_0 [14] ;
unsigned char arr_1 [14] [14] ;
unsigned char arr_7 [14] [14] [14] [14] ;
signed char arr_10 [14] ;
_Bool arr_13 [14] [14] ;
unsigned char arr_18 [24] ;
unsigned char arr_20 [24] ;
long long int arr_15 [14] ;
_Bool arr_16 [14] ;
unsigned long long int arr_21 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)66 : (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned char)176 : (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = 1598360458188420124LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 15992615238110372115ULL : 6545378834288521044ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
