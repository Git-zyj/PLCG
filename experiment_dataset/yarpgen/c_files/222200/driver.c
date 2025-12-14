#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1753542206;
long long int var_1 = -1542553904993518188LL;
short var_2 = (short)23125;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)27416;
unsigned int var_7 = 1894712182U;
long long int var_8 = 2474971042881037813LL;
long long int var_9 = -4905880736243238139LL;
signed char var_10 = (signed char)-93;
short var_11 = (short)2358;
signed char var_12 = (signed char)29;
_Bool var_13 = (_Bool)0;
short var_14 = (short)23791;
int zero = 0;
signed char var_15 = (signed char)-8;
short var_16 = (short)6627;
short var_17 = (short)-1195;
unsigned int var_18 = 3408412650U;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 4023314932U;
signed char var_21 = (signed char)19;
signed char arr_0 [20] [20] ;
unsigned int arr_1 [20] ;
long long int arr_2 [20] ;
long long int arr_3 [20] ;
unsigned int arr_5 [20] ;
signed char arr_6 [20] [20] ;
long long int arr_7 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 3398649499U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 2853265929116758096LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 1750092895778143837LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 3070882557U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = 3083806677747975315LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
