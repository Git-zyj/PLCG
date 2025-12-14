#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-49;
int var_3 = -693620157;
short var_4 = (short)-19315;
int var_5 = 1672445846;
_Bool var_6 = (_Bool)0;
long long int var_7 = -5910603688700678637LL;
short var_8 = (short)-20515;
_Bool var_9 = (_Bool)0;
signed char var_13 = (signed char)-92;
int var_14 = -223276590;
int zero = 0;
int var_16 = 30916014;
signed char var_17 = (signed char)-64;
int var_18 = -1690468515;
unsigned long long int var_19 = 11316953992955133148ULL;
unsigned char arr_1 [24] ;
short arr_2 [24] ;
unsigned char arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)217 : (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)(-32767 - 1);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)216 : (unsigned char)85;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
