#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1927026659;
unsigned short var_5 = (unsigned short)50311;
unsigned char var_6 = (unsigned char)151;
unsigned short var_7 = (unsigned short)14249;
unsigned long long int var_8 = 2175229383696831351ULL;
int zero = 0;
unsigned long long int var_12 = 4317777374608330452ULL;
unsigned char var_13 = (unsigned char)237;
short var_14 = (short)-13542;
unsigned short var_15 = (unsigned short)49660;
unsigned short var_16 = (unsigned short)50469;
long long int var_17 = -2033372358901075515LL;
unsigned long long int var_18 = 17608454220469965089ULL;
unsigned short arr_0 [21] ;
long long int arr_1 [21] ;
unsigned long long int arr_3 [20] ;
unsigned char arr_7 [20] ;
unsigned short arr_8 [20] ;
short arr_11 [24] ;
short arr_4 [20] ;
_Bool arr_5 [20] ;
unsigned short arr_9 [20] ;
long long int arr_10 [20] ;
unsigned int arr_14 [24] ;
_Bool arr_15 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)26106;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 8714126110017681455LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 4392794656035673439ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (unsigned short)63073;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (short)-11313;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)-10210;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (unsigned short)34427;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = -4997803093960065788LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = 78421425U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
