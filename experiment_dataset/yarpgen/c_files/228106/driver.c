#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)121;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 889698346U;
unsigned char var_9 = (unsigned char)227;
short var_10 = (short)-3996;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 10484654772513249910ULL;
int var_14 = -862959281;
short var_15 = (short)-4314;
int var_16 = -1010309252;
int zero = 0;
unsigned short var_17 = (unsigned short)17168;
unsigned char var_18 = (unsigned char)75;
long long int var_19 = 8271761444688986888LL;
unsigned long long int var_20 = 1089518739440069115ULL;
_Bool arr_2 [20] [20] ;
unsigned char arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned char)22;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
