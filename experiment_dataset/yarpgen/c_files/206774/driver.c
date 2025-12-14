#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)250;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1822561620U;
_Bool var_5 = (_Bool)0;
int var_6 = -300209607;
unsigned short var_7 = (unsigned short)1805;
unsigned short var_8 = (unsigned short)37987;
unsigned long long int var_10 = 17252274301625745038ULL;
unsigned char var_11 = (unsigned char)150;
unsigned short var_14 = (unsigned short)11637;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 18437552338079625414ULL;
unsigned short var_17 = (unsigned short)62335;
int var_18 = -454689008;
unsigned short var_19 = (unsigned short)11436;
long long int arr_0 [14] [14] ;
unsigned short arr_2 [14] ;
unsigned int arr_5 [14] ;
unsigned short arr_3 [14] ;
unsigned long long int arr_8 [14] [14] ;
unsigned short arr_11 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 5983513907714351230LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)13050;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 2350312205U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)18237 : (unsigned short)36492;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = 7702928527868651923ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)6221;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
