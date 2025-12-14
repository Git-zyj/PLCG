#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30534;
unsigned int var_1 = 1272267144U;
unsigned int var_3 = 3701260589U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 8556884083930629597ULL;
unsigned int var_7 = 371295384U;
long long int var_8 = 3173901821300601049LL;
unsigned char var_9 = (unsigned char)7;
unsigned int var_10 = 2932859907U;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-59;
short var_14 = (short)20470;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 12667728609718656938ULL;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 874781786U;
long long int var_19 = 2796506877265536270LL;
int var_20 = -278487146;
unsigned long long int var_21 = 9983572716644324687ULL;
unsigned long long int arr_0 [15] [15] ;
short arr_1 [15] [15] ;
unsigned long long int arr_2 [15] ;
unsigned int arr_4 [24] ;
long long int arr_6 [24] [24] ;
unsigned char arr_12 [15] ;
signed char arr_3 [15] ;
unsigned int arr_8 [24] ;
short arr_9 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 5965102250197944392ULL : 12856316228838707464ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-13914;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 2418268615177916410ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 2660883837U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? -5851799008913540572LL : 7064107096713462035LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)250 : (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)40 : (signed char)-12;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 4022222972U : 477436626U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)23159 : (short)21946;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
