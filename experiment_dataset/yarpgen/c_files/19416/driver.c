#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-34;
unsigned char var_2 = (unsigned char)92;
unsigned char var_4 = (unsigned char)94;
int var_5 = -1886544016;
long long int var_6 = 897999611826901029LL;
int var_9 = 130145747;
int var_11 = -1213316217;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)127;
short var_14 = (short)-22974;
signed char var_15 = (signed char)10;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-20;
short var_18 = (short)30094;
long long int arr_1 [22] ;
unsigned short arr_3 [22] ;
unsigned short arr_7 [22] ;
signed char arr_2 [22] ;
_Bool arr_9 [22] ;
short arr_10 [22] ;
long long int arr_11 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -4951928360143532865LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)36570 : (unsigned short)4271;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned short)40727;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (short)13945;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = 4050994975394236166LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
