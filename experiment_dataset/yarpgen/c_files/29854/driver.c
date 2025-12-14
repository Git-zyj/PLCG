#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)14;
unsigned short var_3 = (unsigned short)46021;
unsigned int var_4 = 308840978U;
unsigned char var_5 = (unsigned char)80;
unsigned short var_6 = (unsigned short)24778;
unsigned char var_8 = (unsigned char)49;
unsigned short var_11 = (unsigned short)31803;
unsigned char var_13 = (unsigned char)43;
signed char var_14 = (signed char)-12;
long long int var_15 = 3644867792547338863LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_18 = -8106433124107185241LL;
long long int var_19 = 4399972189083823165LL;
unsigned short var_20 = (unsigned short)18285;
unsigned long long int var_21 = 14163750936630026050ULL;
signed char var_22 = (signed char)83;
unsigned short var_23 = (unsigned short)59473;
long long int var_24 = 619334408003489350LL;
long long int var_25 = -4842845822128340336LL;
unsigned char var_26 = (unsigned char)130;
int arr_0 [15] ;
long long int arr_1 [15] [15] ;
signed char arr_2 [15] [15] [15] ;
unsigned char arr_3 [15] [15] ;
unsigned char arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -435118398;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = -1873944536165803619LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-119;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)234;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
