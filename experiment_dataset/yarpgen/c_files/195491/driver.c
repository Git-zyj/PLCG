#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 718675882;
unsigned int var_5 = 1459338743U;
int var_7 = -1976352395;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 17265231109129503335ULL;
int zero = 0;
short var_14 = (short)-21814;
unsigned long long int var_15 = 6497052440161882749ULL;
unsigned long long int var_16 = 3427584945249913383ULL;
signed char var_17 = (signed char)83;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 5907368010434619397ULL;
signed char var_20 = (signed char)-100;
unsigned long long int var_21 = 5797212589647990605ULL;
unsigned char var_22 = (unsigned char)13;
unsigned long long int var_23 = 11749444501727280302ULL;
int var_24 = -1196077985;
int arr_0 [25] ;
signed char arr_1 [25] ;
unsigned int arr_2 [25] ;
unsigned char arr_5 [22] ;
signed char arr_8 [22] [22] ;
long long int arr_14 [11] ;
unsigned int arr_3 [25] ;
short arr_11 [22] ;
unsigned short arr_12 [22] [22] ;
_Bool arr_16 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1946586342;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 3453837310U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = -8954794256033973639LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 151878947U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (short)-22503;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)63568;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
