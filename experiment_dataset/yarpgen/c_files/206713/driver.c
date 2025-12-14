#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)37;
unsigned int var_4 = 3098148381U;
short var_5 = (short)31475;
long long int var_7 = -8614040285504131453LL;
unsigned long long int var_10 = 5073346160840692246ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_14 = 14225769065302065077ULL;
_Bool var_16 = (_Bool)1;
int var_17 = 949417601;
int zero = 0;
signed char var_18 = (signed char)95;
long long int var_19 = -7376299300208295028LL;
unsigned long long int var_20 = 8417976024112506606ULL;
unsigned int var_21 = 873892268U;
int var_22 = -1526690536;
unsigned long long int arr_0 [10] ;
unsigned int arr_1 [10] ;
short arr_3 [10] [10] ;
signed char arr_6 [10] ;
_Bool arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 14950170494027807385ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2231909416U : 97798760U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-3685 : (short)18219;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)32 : (signed char)110;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
