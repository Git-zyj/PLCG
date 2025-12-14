#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15191;
unsigned short var_2 = (unsigned short)54357;
unsigned long long int var_3 = 8660956246817619559ULL;
unsigned long long int var_4 = 17720367202030714069ULL;
unsigned short var_9 = (unsigned short)27028;
int zero = 0;
unsigned long long int var_16 = 18319533111370342170ULL;
unsigned short var_17 = (unsigned short)35551;
unsigned short var_18 = (unsigned short)36178;
unsigned long long int var_19 = 4531833172788970277ULL;
unsigned short var_20 = (unsigned short)52860;
unsigned short var_21 = (unsigned short)8487;
unsigned long long int var_22 = 7665035946117524246ULL;
unsigned short var_23 = (unsigned short)40488;
unsigned long long int var_24 = 376576814049284922ULL;
unsigned short arr_1 [20] ;
unsigned long long int arr_7 [20] ;
unsigned short arr_11 [22] ;
unsigned long long int arr_19 [22] ;
unsigned long long int arr_3 [20] ;
unsigned short arr_10 [20] [20] ;
unsigned short arr_13 [22] [22] ;
unsigned long long int arr_14 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)59455;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 5161639000793105323ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (unsigned short)23666;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = 16687876407154595076ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 300092249598453752ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)57000;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)30086;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = 10865525383609069782ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
