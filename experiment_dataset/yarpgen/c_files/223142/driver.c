#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)206;
unsigned long long int var_6 = 13588662999810875250ULL;
_Bool var_7 = (_Bool)0;
unsigned char var_13 = (unsigned char)107;
long long int var_15 = -6171612749972552885LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)29132;
long long int var_21 = -2472139600882130176LL;
signed char var_22 = (signed char)-32;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)92;
unsigned char arr_2 [16] ;
_Bool arr_3 [16] ;
_Bool arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
