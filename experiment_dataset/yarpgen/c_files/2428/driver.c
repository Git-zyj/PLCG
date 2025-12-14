#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15980506446577654647ULL;
signed char var_1 = (signed char)0;
unsigned long long int var_2 = 4188634889647448854ULL;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)97;
long long int var_5 = -7279732577979915718LL;
unsigned char var_6 = (unsigned char)232;
short var_7 = (short)-24803;
unsigned short var_8 = (unsigned short)22868;
long long int var_10 = -4082402643398680910LL;
unsigned int var_11 = 1716080521U;
int zero = 0;
unsigned short var_13 = (unsigned short)48924;
unsigned int var_14 = 1870705121U;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)127;
unsigned short var_17 = (unsigned short)41271;
_Bool arr_4 [12] ;
_Bool arr_8 [13] ;
short arr_9 [13] ;
short arr_13 [22] [22] ;
unsigned char arr_14 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (short)5322;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)13791 : (short)5565;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)229 : (unsigned char)35;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
