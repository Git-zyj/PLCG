#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38122;
unsigned short var_2 = (unsigned short)46039;
unsigned char var_5 = (unsigned char)44;
int var_6 = 269578097;
int var_14 = 774173469;
_Bool var_16 = (_Bool)0;
short var_18 = (short)8710;
short var_19 = (short)10052;
int zero = 0;
int var_20 = -1569873045;
short var_21 = (short)24316;
unsigned char var_22 = (unsigned char)148;
unsigned char var_23 = (unsigned char)78;
unsigned char var_24 = (unsigned char)206;
_Bool arr_0 [19] [19] ;
unsigned char arr_1 [19] ;
_Bool arr_2 [19] ;
_Bool arr_3 [19] ;
unsigned short arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned short)14973;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
