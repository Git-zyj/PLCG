#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)8;
unsigned char var_6 = (unsigned char)11;
signed char var_9 = (signed char)-121;
_Bool var_16 = (_Bool)0;
unsigned short var_18 = (unsigned short)11671;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 1428999116108844494LL;
signed char var_22 = (signed char)53;
unsigned short var_23 = (unsigned short)57695;
signed char var_24 = (signed char)-68;
signed char var_25 = (signed char)22;
signed char var_26 = (signed char)91;
_Bool arr_0 [13] ;
long long int arr_3 [13] ;
long long int arr_7 [22] ;
_Bool arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 274984889325944522LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = -594491780252120985LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
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
