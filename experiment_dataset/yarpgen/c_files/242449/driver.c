#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 1932635934545301158LL;
unsigned short var_10 = (unsigned short)22171;
unsigned short var_11 = (unsigned short)43654;
long long int var_12 = -8232583744628352508LL;
int zero = 0;
unsigned int var_15 = 2815599117U;
unsigned char var_16 = (unsigned char)3;
unsigned int var_17 = 136161102U;
unsigned char var_18 = (unsigned char)31;
short var_19 = (short)1841;
long long int var_20 = 338158757552080125LL;
unsigned short var_21 = (unsigned short)38616;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 3053225061U;
_Bool arr_0 [23] ;
unsigned char arr_1 [23] [23] ;
unsigned long long int arr_2 [23] [23] ;
unsigned short arr_3 [23] ;
signed char arr_4 [23] ;
short arr_5 [23] ;
unsigned int arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 8050211884835293847ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)65064;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)-17268;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 4127967604U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
