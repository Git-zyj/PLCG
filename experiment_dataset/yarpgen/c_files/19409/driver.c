#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
unsigned char var_1 = (unsigned char)88;
unsigned short var_4 = (unsigned short)11360;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 12322449632014083002ULL;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)52;
long long int var_9 = -556056244920106701LL;
unsigned int var_11 = 822182241U;
unsigned long long int var_12 = 5929333713803899673ULL;
unsigned char var_14 = (unsigned char)120;
int zero = 0;
signed char var_15 = (signed char)-75;
long long int var_16 = 1993978979444394216LL;
unsigned short var_17 = (unsigned short)35986;
unsigned char var_18 = (unsigned char)242;
unsigned long long int var_19 = 488945473719921481ULL;
unsigned short var_20 = (unsigned short)19666;
short arr_0 [15] ;
long long int arr_1 [15] ;
unsigned char arr_2 [15] [15] [15] ;
_Bool arr_3 [15] [15] ;
unsigned int arr_4 [15] [15] ;
_Bool arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)-25532;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 875263398714006745LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 3584700983U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
