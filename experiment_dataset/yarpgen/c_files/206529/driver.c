#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22639;
unsigned int var_3 = 2068886873U;
short var_4 = (short)-12283;
long long int var_6 = 1303712709059233749LL;
long long int var_7 = 7677728598308048193LL;
int var_8 = -697855270;
long long int var_9 = -1338934089876179489LL;
unsigned short var_10 = (unsigned short)45582;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 354309364U;
int zero = 0;
long long int var_13 = -370234202198792754LL;
unsigned short var_14 = (unsigned short)45580;
short var_15 = (short)-3796;
short var_16 = (short)-22422;
unsigned int var_17 = 4024213568U;
unsigned int arr_1 [17] ;
short arr_3 [17] [17] ;
short arr_4 [17] ;
short arr_5 [17] [17] ;
unsigned int arr_6 [17] [17] [17] ;
unsigned int arr_8 [17] ;
unsigned int arr_10 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 311880980U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (short)22545;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)27321;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (short)29521;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 69047828U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 2408822933U : 3966320605U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 2556547139U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
