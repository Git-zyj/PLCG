#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2946359793210951277ULL;
unsigned char var_3 = (unsigned char)166;
long long int var_4 = 5845511750075121712LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 17996895975962001565ULL;
unsigned int var_8 = 2363947543U;
unsigned short var_9 = (unsigned short)32130;
unsigned short var_11 = (unsigned short)946;
unsigned char var_12 = (unsigned char)45;
int zero = 0;
unsigned long long int var_15 = 5528577441381699958ULL;
int var_16 = -1789236151;
long long int var_17 = -4730920194776177321LL;
unsigned long long int arr_3 [24] ;
unsigned char arr_4 [24] ;
signed char arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 11201248121671670233ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)9;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
