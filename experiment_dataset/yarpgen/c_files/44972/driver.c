#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2749377183U;
unsigned short var_2 = (unsigned short)25766;
short var_3 = (short)-20373;
long long int var_5 = -8557707052512141147LL;
unsigned short var_6 = (unsigned short)12898;
short var_7 = (short)31265;
unsigned char var_8 = (unsigned char)225;
short var_10 = (short)1072;
unsigned long long int var_11 = 2790916224106457009ULL;
signed char var_12 = (signed char)16;
long long int var_14 = 8808011240960706055LL;
int zero = 0;
int var_15 = 1637433152;
unsigned short var_16 = (unsigned short)8606;
short var_17 = (short)4148;
unsigned char var_18 = (unsigned char)162;
int var_19 = -577691623;
unsigned short var_20 = (unsigned short)46459;
unsigned long long int var_21 = 3921292041935055211ULL;
unsigned char var_22 = (unsigned char)109;
unsigned char var_23 = (unsigned char)183;
unsigned int arr_0 [11] [11] ;
unsigned long long int arr_1 [11] ;
int arr_2 [11] ;
int arr_5 [14] ;
unsigned int arr_6 [14] ;
signed char arr_7 [14] [14] ;
unsigned char arr_10 [14] ;
int arr_11 [14] ;
_Bool arr_12 [14] [14] ;
short arr_13 [14] [14] ;
long long int arr_3 [11] ;
unsigned short arr_4 [11] [11] ;
long long int arr_8 [14] ;
unsigned char arr_9 [14] ;
unsigned int arr_14 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 797611620U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 11720293111258654725ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 1812415675;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -288916378;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 1789014715U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 825352615;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = (short)-701;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 345980363606622023LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)5462;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = -5774681807542257499LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = 2477882072U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
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
