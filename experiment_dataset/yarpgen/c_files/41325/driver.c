#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 265926773;
int var_1 = 1420364642;
unsigned int var_2 = 282441718U;
signed char var_3 = (signed char)-32;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1176171673U;
short var_6 = (short)-7445;
unsigned int var_8 = 2378297576U;
long long int var_9 = 5452083070193215384LL;
int var_12 = 731660185;
unsigned long long int var_14 = 5646934350413011872ULL;
signed char var_15 = (signed char)53;
int zero = 0;
unsigned char var_16 = (unsigned char)14;
int var_17 = 264702563;
_Bool var_18 = (_Bool)0;
long long int var_19 = -5446642860738545780LL;
unsigned char var_20 = (unsigned char)182;
long long int arr_0 [17] [17] ;
_Bool arr_1 [17] ;
_Bool arr_5 [10] ;
short arr_2 [17] ;
unsigned short arr_3 [17] ;
_Bool arr_7 [10] ;
unsigned int arr_8 [10] [10] ;
unsigned char arr_9 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 2048245565022303750LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)28090;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)50434;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = 3396730030U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (unsigned char)194;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
