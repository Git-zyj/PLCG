#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)10258;
int var_3 = 88008673;
_Bool var_4 = (_Bool)1;
int var_5 = 784468596;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 1082688232U;
short var_15 = (short)2138;
unsigned long long int var_16 = 1251423916491908895ULL;
int var_17 = 480533733;
unsigned int var_18 = 690009891U;
long long int var_19 = -8150944235550696779LL;
int var_20 = 1812110577;
int var_21 = 417485939;
unsigned long long int arr_2 [23] [23] ;
unsigned char arr_3 [23] [23] [23] ;
unsigned short arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 1418409220127462897ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)57169;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
