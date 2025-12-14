#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-63;
signed char var_1 = (signed char)7;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 7296129806747656899ULL;
int var_6 = -1716173217;
int var_7 = -1964646866;
unsigned char var_8 = (unsigned char)175;
unsigned short var_10 = (unsigned short)29266;
_Bool var_11 = (_Bool)1;
long long int var_14 = 5523193924985590906LL;
int zero = 0;
int var_16 = 1745725672;
short var_17 = (short)27421;
unsigned char var_18 = (unsigned char)93;
long long int var_19 = -7990454062912186174LL;
_Bool var_20 = (_Bool)1;
unsigned char arr_0 [19] [19] ;
short arr_1 [19] ;
int arr_3 [19] ;
_Bool arr_10 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)-16238;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -1704745968;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
