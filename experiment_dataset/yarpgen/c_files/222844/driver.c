#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1529596385U;
signed char var_1 = (signed char)-102;
long long int var_2 = 4059521495969014753LL;
unsigned short var_3 = (unsigned short)25616;
unsigned int var_4 = 1486701874U;
unsigned char var_5 = (unsigned char)196;
unsigned char var_6 = (unsigned char)106;
long long int var_7 = -4131392288706534523LL;
unsigned int var_8 = 394453816U;
int var_9 = -307795296;
short var_10 = (short)-11493;
long long int var_11 = -4677373285563530391LL;
_Bool var_12 = (_Bool)0;
short var_13 = (short)32074;
int zero = 0;
long long int var_15 = -4530043949664434283LL;
unsigned char var_16 = (unsigned char)234;
unsigned long long int var_17 = 15959672378711249592ULL;
unsigned int var_18 = 3665201989U;
unsigned int var_19 = 1856588636U;
long long int var_20 = 6767388663825572473LL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1864600047U;
unsigned int var_23 = 3724593822U;
unsigned long long int var_24 = 12817477913742778039ULL;
unsigned int var_25 = 2088032941U;
long long int var_26 = 1506707553747615035LL;
long long int arr_0 [23] ;
unsigned int arr_1 [23] ;
signed char arr_2 [20] ;
unsigned int arr_4 [20] ;
unsigned int arr_7 [20] [20] ;
unsigned int arr_8 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 9179707485934101778LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 3794400293U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)16 : (signed char)79;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3609382311U : 951546557U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 403420282U : 3190623161U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2988655872U : 1018026887U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
