#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 1841544614U;
signed char var_4 = (signed char)23;
short var_5 = (short)-6310;
unsigned long long int var_6 = 8819374264265756918ULL;
unsigned long long int var_7 = 16704787657050691193ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)88;
unsigned long long int var_14 = 9798617391565046535ULL;
signed char var_15 = (signed char)-54;
int var_16 = 494127243;
short var_17 = (short)26549;
int var_18 = -141281242;
unsigned long long int var_19 = 18088804715935785525ULL;
signed char var_20 = (signed char)69;
int arr_0 [22] ;
short arr_5 [22] ;
unsigned long long int arr_6 [22] [22] ;
int arr_9 [23] ;
int arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1336000592;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (short)-24392;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 15653795557969914311ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = -798937398;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = -1289932995;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
