#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7061339848478368303LL;
unsigned char var_1 = (unsigned char)43;
unsigned short var_3 = (unsigned short)41775;
unsigned char var_4 = (unsigned char)102;
unsigned long long int var_7 = 2001281945473520896ULL;
unsigned short var_8 = (unsigned short)4493;
unsigned short var_9 = (unsigned short)47793;
unsigned char var_10 = (unsigned char)208;
unsigned short var_11 = (unsigned short)58897;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)8142;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 503777815U;
long long int var_17 = -827572448596163841LL;
unsigned long long int var_18 = 2767952290422942615ULL;
unsigned char var_19 = (unsigned char)96;
_Bool var_20 = (_Bool)1;
signed char arr_0 [12] ;
unsigned char arr_1 [12] ;
unsigned short arr_2 [12] ;
unsigned short arr_3 [12] ;
_Bool arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)20963;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)36801 : (unsigned short)6427;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
