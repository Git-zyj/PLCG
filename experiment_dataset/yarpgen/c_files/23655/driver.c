#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -691189548;
signed char var_1 = (signed char)-1;
unsigned int var_2 = 1122887137U;
unsigned char var_3 = (unsigned char)150;
long long int var_4 = -2191866289935888954LL;
short var_5 = (short)15489;
short var_8 = (short)-15344;
short var_9 = (short)18472;
short var_10 = (short)23040;
unsigned long long int var_12 = 13866881746067983655ULL;
long long int var_13 = 8588185895684644372LL;
_Bool var_14 = (_Bool)0;
int var_15 = -1331848569;
unsigned long long int var_16 = 15553452691753622347ULL;
int zero = 0;
unsigned long long int var_17 = 3755444774450871783ULL;
unsigned char var_18 = (unsigned char)173;
unsigned long long int var_19 = 5350041767204600442ULL;
unsigned long long int var_20 = 8807849838991454183ULL;
unsigned long long int var_21 = 12351605008928562540ULL;
signed char var_22 = (signed char)88;
short var_23 = (short)-14035;
short arr_0 [24] ;
unsigned char arr_1 [24] [24] ;
short arr_3 [24] ;
unsigned int arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)2200;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)241 : (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)30052;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 233969627U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
