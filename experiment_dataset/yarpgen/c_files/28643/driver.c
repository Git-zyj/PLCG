#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 854450026345818461ULL;
short var_1 = (short)-8495;
long long int var_2 = -358298523869021514LL;
signed char var_3 = (signed char)119;
unsigned int var_4 = 3730073131U;
unsigned int var_5 = 4016640392U;
signed char var_6 = (signed char)-48;
unsigned int var_11 = 3725254693U;
short var_12 = (short)30471;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_16 = 4595764587112179459LL;
signed char var_17 = (signed char)-94;
unsigned short var_18 = (unsigned short)5411;
int var_19 = -1113054348;
long long int var_20 = 5869031743920812044LL;
long long int var_21 = 5644300143762040816LL;
long long int arr_0 [21] ;
signed char arr_1 [21] [21] ;
signed char arr_2 [21] [21] ;
signed char arr_3 [21] [21] ;
long long int arr_6 [21] [21] [21] ;
long long int arr_9 [21] [21] ;
unsigned char arr_4 [21] ;
unsigned short arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 6581300787446229549LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -5026500310961343372LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = 6600263630609668576LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned short)22854;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
