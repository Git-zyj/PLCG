#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10370;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 4188007271U;
unsigned short var_11 = (unsigned short)8040;
long long int var_12 = -1871447781043807667LL;
long long int var_15 = -5054729729187027810LL;
unsigned int var_18 = 2482978741U;
int zero = 0;
long long int var_19 = -6217103880165409148LL;
unsigned short var_20 = (unsigned short)1434;
unsigned int var_21 = 2230880124U;
unsigned char var_22 = (unsigned char)51;
unsigned int var_23 = 3828369166U;
_Bool var_24 = (_Bool)0;
int var_25 = -1009241876;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 9908843815947479891ULL;
long long int var_28 = -4659589583005740054LL;
unsigned long long int arr_0 [16] ;
unsigned int arr_1 [16] ;
_Bool arr_2 [16] [16] ;
unsigned int arr_3 [16] [16] ;
unsigned short arr_4 [16] ;
_Bool arr_5 [16] [16] ;
unsigned long long int arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 16004183212431803018ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 49818948U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 913065007U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)12443;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 12464536811349813462ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
