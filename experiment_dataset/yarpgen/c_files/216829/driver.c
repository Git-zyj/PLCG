#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1318564774548639200LL;
short var_2 = (short)-30552;
long long int var_3 = -7860824611561182472LL;
int var_7 = -2028611806;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)26688;
unsigned short var_12 = (unsigned short)2704;
int zero = 0;
unsigned long long int var_13 = 7200027357048590178ULL;
int var_14 = 1511201298;
int var_15 = 1332653838;
_Bool var_16 = (_Bool)0;
int var_17 = -101692127;
unsigned short var_18 = (unsigned short)11451;
unsigned int var_19 = 3559156809U;
short arr_0 [12] ;
signed char arr_1 [12] ;
unsigned long long int arr_2 [12] ;
int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)4364;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 3764418138683913417ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 1467356147;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
