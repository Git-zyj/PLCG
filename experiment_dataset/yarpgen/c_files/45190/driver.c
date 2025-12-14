#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4069179705U;
unsigned int var_2 = 1403525806U;
unsigned long long int var_8 = 10821017454870165412ULL;
unsigned long long int var_13 = 17780307854068275154ULL;
int zero = 0;
unsigned int var_16 = 1017661473U;
unsigned long long int var_17 = 9620868927786246835ULL;
unsigned char var_18 = (unsigned char)184;
unsigned long long int var_19 = 7063231842149800740ULL;
_Bool var_20 = (_Bool)1;
signed char arr_4 [24] [24] [24] ;
long long int arr_8 [23] ;
unsigned int arr_12 [23] [23] ;
unsigned int arr_6 [24] ;
unsigned long long int arr_13 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -6882272890477480687LL : 770928826636992806LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = 3143157726U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 3131191022U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 14239665872279057216ULL : 15255248532857326528ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
