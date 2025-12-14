#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8129621069719329884LL;
unsigned long long int var_2 = 9921857307161130015ULL;
signed char var_3 = (signed char)-20;
unsigned long long int var_7 = 1433989221560372412ULL;
int var_12 = -908780519;
unsigned char var_13 = (unsigned char)78;
unsigned char var_14 = (unsigned char)93;
unsigned long long int var_15 = 15177432451867724532ULL;
short var_18 = (short)18999;
int zero = 0;
int var_19 = 115850142;
unsigned short var_20 = (unsigned short)52260;
long long int var_21 = 3244001744864112115LL;
long long int var_22 = 2164994868448953477LL;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 2466085355U;
signed char var_25 = (signed char)53;
_Bool arr_0 [13] ;
short arr_1 [13] ;
unsigned short arr_4 [13] ;
_Bool arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)-4634;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)39414;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
