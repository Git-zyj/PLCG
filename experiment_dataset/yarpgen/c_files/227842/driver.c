#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4062261821U;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)39479;
short var_8 = (short)-23375;
unsigned char var_9 = (unsigned char)65;
unsigned short var_11 = (unsigned short)57517;
unsigned long long int var_17 = 15720939698112726746ULL;
unsigned short var_18 = (unsigned short)2070;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 6717122993977842406ULL;
int var_21 = -2088752056;
int var_22 = -1002412059;
unsigned long long int var_23 = 6030217114444661973ULL;
short var_24 = (short)-27577;
unsigned short var_25 = (unsigned short)2098;
unsigned short var_26 = (unsigned short)18752;
int var_27 = 1600271583;
short var_28 = (short)-21015;
unsigned short arr_0 [11] ;
_Bool arr_1 [11] [11] ;
unsigned short arr_2 [20] [20] ;
unsigned long long int arr_3 [20] ;
long long int arr_8 [24] [24] ;
int arr_10 [24] ;
unsigned char arr_4 [20] [20] ;
unsigned long long int arr_5 [20] ;
unsigned short arr_13 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)47138 : (unsigned short)39604;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)26588;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 9027469768685891497ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = 1348687064321846004LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = -212393935;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 13887237818242488496ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)32096;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
