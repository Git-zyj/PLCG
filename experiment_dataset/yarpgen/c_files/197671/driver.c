#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2942093544494342812ULL;
unsigned short var_1 = (unsigned short)34858;
unsigned long long int var_2 = 13071199148896524783ULL;
signed char var_3 = (signed char)4;
unsigned long long int var_4 = 18328983516259240911ULL;
unsigned int var_5 = 1065786346U;
unsigned char var_7 = (unsigned char)208;
int var_8 = -512888946;
unsigned char var_10 = (unsigned char)77;
signed char var_11 = (signed char)37;
int zero = 0;
unsigned int var_13 = 3503630332U;
short var_14 = (short)22123;
unsigned long long int var_15 = 17540123400713515807ULL;
short var_16 = (short)-16149;
unsigned int var_17 = 440068785U;
int var_18 = 1592137625;
short var_19 = (short)-11838;
unsigned short var_20 = (unsigned short)34867;
int var_21 = 64714559;
short arr_0 [20] ;
unsigned int arr_1 [20] [20] ;
unsigned long long int arr_2 [18] ;
unsigned int arr_3 [18] [18] ;
_Bool arr_8 [18] ;
unsigned int arr_9 [18] ;
unsigned int arr_11 [18] ;
unsigned short arr_19 [23] ;
short arr_4 [18] ;
unsigned long long int arr_13 [18] [18] [18] ;
unsigned int arr_14 [18] ;
unsigned char arr_21 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)-23540;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 2423324932U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1595018643798628668ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 98152929U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 3399278657U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 588635749U : 1524171375U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned short)14518 : (unsigned short)51359;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (short)20906;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 8470292158202607854ULL : 6345064534908108101ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 3619544506U : 2834724499U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)27 : (unsigned char)252;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
