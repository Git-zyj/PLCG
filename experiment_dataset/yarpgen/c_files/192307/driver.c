#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49805;
signed char var_2 = (signed char)-37;
signed char var_5 = (signed char)99;
unsigned int var_8 = 2802093874U;
short var_9 = (short)25863;
unsigned short var_11 = (unsigned short)19938;
int zero = 0;
unsigned int var_12 = 2374515605U;
unsigned int var_13 = 3646148362U;
unsigned int var_14 = 2406041849U;
unsigned short var_15 = (unsigned short)4682;
_Bool var_16 = (_Bool)0;
unsigned long long int arr_2 [14] [14] ;
_Bool arr_4 [14] [14] [14] ;
unsigned long long int arr_5 [14] [14] ;
unsigned int arr_6 [14] ;
unsigned long long int arr_10 [15] ;
int arr_11 [15] ;
unsigned short arr_8 [14] ;
unsigned short arr_9 [14] [14] ;
unsigned short arr_13 [15] ;
long long int arr_16 [15] ;
unsigned long long int arr_17 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 1617190602319526301ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 1353508933995697364ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 2003562475U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 9408240919146523519ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = -773956035;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (unsigned short)50765;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)57762;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (unsigned short)65308;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = -6840051796093545924LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = 1651948029973313498ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
