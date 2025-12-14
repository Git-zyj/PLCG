#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2504000780U;
unsigned long long int var_2 = 14226249715950011502ULL;
long long int var_5 = -5866717640915600835LL;
unsigned long long int var_6 = 1949941728094902591ULL;
unsigned long long int var_7 = 199862138363897396ULL;
short var_10 = (short)19830;
unsigned long long int var_13 = 81773155271941680ULL;
unsigned long long int var_14 = 2950642393757771542ULL;
unsigned long long int var_17 = 2214580416665610549ULL;
int zero = 0;
unsigned int var_18 = 2373074548U;
unsigned short var_19 = (unsigned short)17769;
unsigned long long int var_20 = 13437574295940708455ULL;
int arr_0 [14] [14] ;
unsigned char arr_5 [14] ;
unsigned char arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 659445126;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned char)242;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
