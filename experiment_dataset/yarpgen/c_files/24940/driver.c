#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned long long int var_7 = 5014955176996921326ULL;
unsigned int var_8 = 2599697949U;
_Bool var_9 = (_Bool)1;
long long int var_10 = -1470722889412856744LL;
short var_11 = (short)-12385;
int zero = 0;
unsigned int var_13 = 1760208141U;
long long int var_14 = -360148916325127493LL;
unsigned int var_15 = 2180978894U;
short var_16 = (short)-28650;
unsigned short var_17 = (unsigned short)42547;
unsigned char var_18 = (unsigned char)250;
unsigned short var_19 = (unsigned short)58426;
_Bool var_20 = (_Bool)1;
unsigned char arr_0 [20] ;
_Bool arr_1 [20] ;
short arr_5 [20] [20] ;
short arr_9 [15] ;
_Bool arr_6 [20] ;
unsigned char arr_7 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)60 : (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-19749;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)5422 : (short)-21997;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)91;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
