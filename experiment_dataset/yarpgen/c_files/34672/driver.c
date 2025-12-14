#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)106;
unsigned int var_4 = 1215147705U;
int var_5 = 1448925476;
unsigned short var_6 = (unsigned short)21245;
unsigned long long int var_7 = 17811153932716357163ULL;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-11702;
int zero = 0;
unsigned long long int var_15 = 4428060427349698834ULL;
long long int var_16 = 8037387351324703208LL;
unsigned long long int var_17 = 17517587197593663944ULL;
long long int var_18 = 7068831587124746650LL;
unsigned short var_19 = (unsigned short)47783;
long long int arr_0 [24] ;
unsigned short arr_1 [24] ;
long long int arr_4 [24] ;
signed char arr_2 [24] ;
unsigned short arr_5 [24] ;
unsigned long long int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1504868372829905910LL : 399251920991168013LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)52067;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -1898738024860938417LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-58 : (signed char)17;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)26201;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 11269016611742509107ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
