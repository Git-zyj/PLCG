#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-85;
short var_2 = (short)-25411;
short var_5 = (short)-26965;
short var_6 = (short)23615;
short var_7 = (short)-5740;
unsigned char var_8 = (unsigned char)30;
_Bool var_9 = (_Bool)0;
int var_10 = 1555698479;
short var_13 = (short)-22050;
short var_14 = (short)-28488;
short var_15 = (short)-9437;
int zero = 0;
unsigned int var_16 = 2993207765U;
unsigned long long int var_17 = 2384249122190642007ULL;
short var_18 = (short)8387;
unsigned char var_19 = (unsigned char)129;
unsigned int var_20 = 961330499U;
unsigned char var_21 = (unsigned char)158;
int arr_0 [13] ;
long long int arr_1 [13] [13] ;
int arr_2 [13] [13] ;
unsigned char arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1608146897;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 112727634360185532LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = -678204667;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)62;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
