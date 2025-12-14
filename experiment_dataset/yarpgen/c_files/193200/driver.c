#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 392683732U;
long long int var_2 = -9094540032175523973LL;
unsigned long long int var_3 = 17145098184737009405ULL;
unsigned int var_4 = 3996699830U;
long long int var_6 = 8287332139440420053LL;
signed char var_7 = (signed char)76;
unsigned char var_12 = (unsigned char)142;
int var_16 = -756327445;
unsigned int var_17 = 2981282543U;
int zero = 0;
unsigned int var_19 = 2187367232U;
unsigned int var_20 = 1558831078U;
unsigned short var_21 = (unsigned short)17945;
short var_22 = (short)-32377;
unsigned short var_23 = (unsigned short)54285;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)12;
_Bool arr_0 [23] ;
unsigned char arr_1 [23] ;
unsigned int arr_2 [24] ;
int arr_3 [24] [24] ;
int arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 882906702U : 445823171U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -1584293463 : -1994928932;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -1737719025 : 2019923848;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
