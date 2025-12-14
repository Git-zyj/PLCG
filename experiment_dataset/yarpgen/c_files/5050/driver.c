#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5125;
int var_1 = 1171102177;
short var_3 = (short)24983;
unsigned long long int var_4 = 11287524479487424710ULL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)159;
short var_8 = (short)-27789;
unsigned char var_9 = (unsigned char)209;
unsigned short var_10 = (unsigned short)41832;
int zero = 0;
unsigned short var_11 = (unsigned short)46198;
int var_12 = 1064356835;
unsigned short var_13 = (unsigned short)9049;
unsigned short var_14 = (unsigned short)56423;
signed char var_15 = (signed char)79;
unsigned int var_16 = 648425641U;
int var_17 = 1998178487;
short var_18 = (short)31402;
signed char var_19 = (signed char)56;
unsigned char var_20 = (unsigned char)166;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)5790;
unsigned int var_23 = 3287454594U;
unsigned long long int var_24 = 9341290093368300577ULL;
unsigned int var_25 = 936101583U;
unsigned int arr_0 [20] ;
unsigned int arr_1 [20] [20] ;
_Bool arr_2 [19] ;
long long int arr_3 [19] ;
unsigned int arr_4 [19] [19] ;
long long int arr_5 [19] [19] ;
unsigned char arr_6 [19] [19] ;
unsigned short arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 1676182345U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 2902871831U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 9221781526637155900LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 951083048U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = -4829447340171262461LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (unsigned short)48605;
}

void checksum() {
    hash(&seed, var_11);
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
