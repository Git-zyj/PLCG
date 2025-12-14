#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2173421756U;
unsigned short var_6 = (unsigned short)23279;
unsigned short var_9 = (unsigned short)35403;
long long int var_10 = 1840364223226533721LL;
unsigned char var_12 = (unsigned char)120;
long long int var_13 = -949912336811570394LL;
int zero = 0;
unsigned char var_17 = (unsigned char)245;
unsigned int var_18 = 3686776491U;
unsigned char var_19 = (unsigned char)64;
unsigned short var_20 = (unsigned short)2134;
long long int var_21 = -5708706481849456920LL;
_Bool var_22 = (_Bool)1;
long long int arr_0 [13] [13] ;
signed char arr_1 [13] ;
unsigned int arr_2 [13] [13] ;
int arr_4 [12] [12] ;
short arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -6538359470179116189LL : 8073491149039429647LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)94 : (signed char)-59;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 619553129U : 2696599081U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = -739058002;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (short)-22210;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
