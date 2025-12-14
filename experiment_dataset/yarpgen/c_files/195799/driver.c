#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 239744672U;
unsigned long long int var_2 = 18208854261819893919ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 1610333234330676454ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_10 = (unsigned short)52826;
long long int var_11 = -2946044826952436484LL;
unsigned int var_14 = 503386827U;
int zero = 0;
unsigned int var_17 = 877417470U;
unsigned int var_18 = 734530403U;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)22045;
unsigned char arr_0 [23] ;
short arr_2 [23] [23] ;
unsigned int arr_3 [23] ;
unsigned long long int arr_5 [23] [23] ;
unsigned long long int arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-22705 : (short)10386;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1895468663U : 466124872U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 2639763451953692414ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 6792261033416934587ULL : 11225276346962704808ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
