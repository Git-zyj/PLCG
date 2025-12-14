#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1247726725;
unsigned short var_6 = (unsigned short)41170;
unsigned short var_10 = (unsigned short)2783;
long long int var_11 = 2404432744125572063LL;
unsigned short var_12 = (unsigned short)40543;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)17673;
int var_17 = -516971196;
int zero = 0;
int var_18 = -177378020;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-122;
unsigned short var_21 = (unsigned short)42194;
unsigned int var_22 = 722593004U;
unsigned long long int arr_0 [10] ;
short arr_1 [10] [10] ;
signed char arr_3 [13] ;
int arr_5 [13] ;
int arr_2 [10] ;
unsigned char arr_6 [13] [13] ;
short arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 10800309067669946546ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (short)31748;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)82;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 284825743;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1541487105;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (short)17903;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
