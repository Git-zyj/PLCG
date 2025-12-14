#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51489;
unsigned long long int var_1 = 17756017762595085078ULL;
unsigned char var_3 = (unsigned char)81;
int var_4 = 1593302414;
int var_5 = -255297799;
long long int var_6 = -2410960163063917507LL;
int var_7 = 1777236639;
int var_8 = -294720497;
unsigned long long int var_9 = 11493495761767164534ULL;
short var_10 = (short)28779;
int zero = 0;
unsigned char var_11 = (unsigned char)171;
long long int var_12 = 7500091393628745128LL;
unsigned short var_13 = (unsigned short)2755;
_Bool arr_0 [16] [16] ;
int arr_1 [16] ;
_Bool arr_2 [16] [16] ;
long long int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 305941580;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -5734206741717743375LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
