#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 170346280U;
unsigned int var_1 = 2838204341U;
int var_2 = -1076686924;
unsigned long long int var_3 = 11759673212490915812ULL;
unsigned int var_4 = 1926616261U;
unsigned int var_8 = 3993783863U;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int var_11 = 1717882668;
int var_12 = -1068880658;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1087761297U;
int var_15 = -982177378;
int zero = 0;
unsigned long long int var_16 = 15649728368322799401ULL;
unsigned int var_17 = 1037957672U;
int var_18 = -171494694;
int var_19 = -869037517;
unsigned int var_20 = 3495267805U;
int var_21 = -2085761690;
unsigned long long int var_22 = 18054338411035642727ULL;
unsigned int var_23 = 2006209212U;
int arr_0 [12] [12] ;
int arr_1 [12] ;
_Bool arr_4 [12] [12] [12] ;
_Bool arr_5 [12] ;
_Bool arr_6 [12] [12] ;
unsigned int arr_7 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = -1316646577;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1710861311;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = 2240186338U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
