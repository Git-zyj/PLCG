#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)107;
unsigned short var_3 = (unsigned short)47054;
unsigned char var_4 = (unsigned char)243;
short var_5 = (short)-276;
long long int var_6 = 121672197321176027LL;
unsigned long long int var_7 = 13668807375828040239ULL;
unsigned char var_9 = (unsigned char)140;
int var_10 = -488165745;
signed char var_11 = (signed char)-34;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)-5940;
_Bool var_14 = (_Bool)0;
long long int var_15 = 555902107956698395LL;
signed char var_16 = (signed char)-36;
signed char var_17 = (signed char)-114;
_Bool var_18 = (_Bool)1;
long long int var_19 = -8382868449657967208LL;
int arr_0 [23] [23] ;
signed char arr_1 [23] ;
short arr_2 [23] ;
unsigned int arr_3 [23] [23] ;
_Bool arr_4 [23] ;
unsigned short arr_5 [23] [23] [23] ;
unsigned short arr_6 [23] [23] ;
unsigned int arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -520755537;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)1737;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 3727280107U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)60336;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)42046;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 2684512445U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
