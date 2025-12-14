#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-903;
short var_2 = (short)-7383;
unsigned long long int var_3 = 16105318974780665689ULL;
unsigned long long int var_5 = 11392995044025169316ULL;
long long int var_8 = 8860877661348045789LL;
unsigned short var_9 = (unsigned short)1884;
unsigned short var_10 = (unsigned short)62270;
long long int var_11 = -5463521044310141680LL;
long long int var_12 = 8739760832325408668LL;
long long int var_13 = 8216095323758146635LL;
int zero = 0;
unsigned int var_14 = 425288095U;
signed char var_15 = (signed char)-61;
unsigned short var_16 = (unsigned short)27030;
unsigned long long int var_17 = 7910885460838352593ULL;
unsigned char arr_0 [20] ;
unsigned int arr_1 [20] ;
signed char arr_2 [20] [20] ;
unsigned long long int arr_3 [20] ;
short arr_4 [20] [20] ;
unsigned int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 2379159747U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 13644573931653468256ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-29983;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 641608119U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
