#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1791670682971416198LL;
signed char var_4 = (signed char)-72;
long long int var_7 = -2456644586941141111LL;
unsigned int var_8 = 3108735267U;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)3911;
int zero = 0;
unsigned long long int var_16 = 12523824164785921141ULL;
unsigned int var_17 = 2830845661U;
signed char var_18 = (signed char)48;
unsigned int var_19 = 3203737347U;
signed char var_20 = (signed char)-58;
int var_21 = 1320888900;
short arr_0 [25] ;
unsigned long long int arr_1 [25] [25] ;
long long int arr_3 [25] ;
unsigned long long int arr_4 [25] [25] ;
unsigned short arr_2 [25] ;
unsigned int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)9100;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 1373657573974021918ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 4944388716108644459LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 4008229418146621971ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)40837;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 2036279805U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
