#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5647;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)46635;
unsigned int var_6 = 873287056U;
unsigned long long int var_9 = 6080362165193093106ULL;
short var_14 = (short)6186;
int zero = 0;
unsigned char var_15 = (unsigned char)20;
unsigned long long int var_16 = 14396334885514892960ULL;
short var_17 = (short)-2522;
unsigned short var_18 = (unsigned short)52811;
unsigned short var_19 = (unsigned short)36059;
int var_20 = -391937590;
_Bool var_21 = (_Bool)0;
int var_22 = -413439270;
unsigned char var_23 = (unsigned char)183;
signed char var_24 = (signed char)-104;
unsigned int arr_4 [22] ;
unsigned short arr_5 [22] [22] ;
long long int arr_6 [21] [21] ;
short arr_9 [10] ;
_Bool arr_3 [15] ;
unsigned short arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2047629622U : 698255727U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)42635;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = -2567008079699636208LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (short)12318;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (unsigned short)59631;
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
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
