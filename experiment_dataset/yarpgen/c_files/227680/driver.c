#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25615;
unsigned short var_4 = (unsigned short)29033;
long long int var_5 = -9092572087766847063LL;
unsigned short var_6 = (unsigned short)8314;
unsigned int var_9 = 3206945447U;
unsigned int var_11 = 2998673078U;
int zero = 0;
unsigned short var_13 = (unsigned short)8415;
int var_14 = 998677770;
short var_15 = (short)-30653;
unsigned short var_16 = (unsigned short)3250;
short var_17 = (short)-24798;
_Bool var_18 = (_Bool)0;
unsigned char arr_0 [14] ;
unsigned int arr_1 [14] ;
signed char arr_3 [14] ;
int arr_4 [14] [14] ;
unsigned short arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2279660957U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = -315881507;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned short)21061;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
