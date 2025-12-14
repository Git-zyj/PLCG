#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21056;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned short var_6 = (unsigned short)60729;
unsigned char var_11 = (unsigned char)163;
unsigned short var_12 = (unsigned short)17059;
unsigned short var_13 = (unsigned short)11946;
signed char var_14 = (signed char)37;
signed char var_15 = (signed char)-9;
unsigned long long int var_16 = 12417346638983961191ULL;
signed char var_17 = (signed char)119;
int zero = 0;
unsigned int var_20 = 2355150969U;
unsigned long long int var_21 = 13438096046103556361ULL;
signed char var_22 = (signed char)3;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 17566670723963025051ULL;
long long int var_25 = 2905046017866887282LL;
unsigned char var_26 = (unsigned char)210;
unsigned short arr_0 [20] ;
_Bool arr_1 [20] ;
_Bool arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)2359;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
