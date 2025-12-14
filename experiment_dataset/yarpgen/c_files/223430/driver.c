#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3888130392U;
unsigned char var_1 = (unsigned char)64;
int var_5 = 1410774701;
signed char var_6 = (signed char)-91;
unsigned short var_7 = (unsigned short)21977;
_Bool var_8 = (_Bool)0;
signed char var_11 = (signed char)-111;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)51060;
unsigned char var_15 = (unsigned char)147;
int zero = 0;
int var_17 = 2126157737;
unsigned short var_18 = (unsigned short)23518;
unsigned int var_19 = 2686317829U;
signed char var_20 = (signed char)76;
unsigned char var_21 = (unsigned char)27;
int arr_4 [24] ;
unsigned short arr_5 [24] ;
long long int arr_3 [14] ;
long long int arr_7 [24] [24] ;
int arr_8 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -1184996689;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)50920;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 5195543521710689967LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = -5353000600088505724LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = 1862155165;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
