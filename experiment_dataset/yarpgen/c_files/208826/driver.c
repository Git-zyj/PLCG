#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1240187565;
unsigned long long int var_6 = 12748511878375150960ULL;
unsigned short var_7 = (unsigned short)13835;
unsigned char var_8 = (unsigned char)173;
unsigned long long int var_9 = 5215955646053948911ULL;
unsigned long long int var_10 = 12886052955558947646ULL;
unsigned long long int var_11 = 3961842531564261389ULL;
signed char var_12 = (signed char)1;
int zero = 0;
int var_13 = -154700599;
unsigned short var_14 = (unsigned short)16304;
signed char var_15 = (signed char)-102;
short var_16 = (short)-7715;
int var_17 = -894062180;
int var_18 = 34434548;
unsigned long long int var_19 = 16207445432449594334ULL;
int var_20 = 55850578;
int var_21 = 1566439220;
int arr_0 [10] ;
unsigned char arr_1 [10] [10] ;
unsigned long long int arr_6 [10] ;
unsigned int arr_2 [10] ;
int arr_3 [10] ;
int arr_7 [10] ;
_Bool arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 970529670;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 3558404217689028377ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 2019968258U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 974856187;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 238106276;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
