#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5452402935548091070LL;
_Bool var_1 = (_Bool)1;
long long int var_4 = -5857938711358576412LL;
short var_5 = (short)-9892;
signed char var_6 = (signed char)-35;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)-81;
signed char var_12 = (signed char)45;
unsigned char var_13 = (unsigned char)32;
short var_14 = (short)-22884;
int zero = 0;
int var_15 = 1701099784;
unsigned int var_16 = 2379084557U;
signed char var_17 = (signed char)110;
signed char var_18 = (signed char)-8;
unsigned int var_19 = 715880573U;
unsigned char var_20 = (unsigned char)87;
int var_21 = 1793054227;
int var_22 = 1843088769;
unsigned int arr_3 [11] [11] ;
unsigned int arr_6 [10] ;
unsigned char arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 534058521U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 1365382169U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (unsigned char)182;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
