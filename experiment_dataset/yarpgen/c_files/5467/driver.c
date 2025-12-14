#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-115;
short var_1 = (short)-21670;
short var_2 = (short)9941;
short var_3 = (short)30587;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-69;
signed char var_7 = (signed char)-64;
int var_12 = -1083853675;
long long int var_14 = -750811712510813682LL;
int zero = 0;
signed char var_17 = (signed char)108;
_Bool var_18 = (_Bool)1;
int var_19 = 1502834912;
unsigned int var_20 = 1930482672U;
signed char arr_0 [18] ;
signed char arr_2 [18] ;
short arr_3 [18] ;
short arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)-55;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)16456;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (short)-17918;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
