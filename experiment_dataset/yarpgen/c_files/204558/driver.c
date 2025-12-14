#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)215;
unsigned short var_1 = (unsigned short)7047;
long long int var_2 = 4204323453479010646LL;
signed char var_3 = (signed char)21;
signed char var_4 = (signed char)-76;
short var_6 = (short)-19358;
long long int var_7 = 411363016007556552LL;
signed char var_8 = (signed char)-15;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_10 = (short)12279;
int var_11 = 1030176852;
unsigned int var_12 = 3527979335U;
short var_13 = (short)-24987;
unsigned char var_14 = (unsigned char)180;
unsigned long long int var_15 = 7595742817421338548ULL;
unsigned short var_16 = (unsigned short)38371;
short var_17 = (short)-30229;
signed char arr_1 [12] [12] ;
short arr_2 [12] [12] ;
signed char arr_3 [12] [12] ;
unsigned char arr_4 [23] ;
unsigned int arr_9 [11] ;
signed char arr_6 [23] ;
unsigned short arr_10 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)113 : (signed char)-113;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-11896;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)84 : (signed char)-46;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = 122523982U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)6278;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
