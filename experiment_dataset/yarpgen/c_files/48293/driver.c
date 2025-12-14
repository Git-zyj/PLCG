#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6741059655052474299LL;
long long int var_3 = -9181745766763241383LL;
long long int var_6 = 3632143081138076693LL;
unsigned long long int var_10 = 12655657756255563753ULL;
int var_11 = -1178298109;
signed char var_13 = (signed char)110;
int zero = 0;
unsigned int var_16 = 952641145U;
unsigned long long int var_17 = 8735101459248689552ULL;
_Bool var_18 = (_Bool)0;
long long int var_19 = -4086420177083597214LL;
short var_20 = (short)12971;
_Bool var_21 = (_Bool)1;
short arr_0 [16] ;
unsigned long long int arr_1 [16] ;
unsigned int arr_4 [21] ;
short arr_6 [21] ;
short arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)5108;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 16334468270980404727ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 1110003629U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (short)-17022;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-19854;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
