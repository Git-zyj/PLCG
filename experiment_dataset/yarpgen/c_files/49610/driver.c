#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2287183531U;
long long int var_6 = 2856249290928687956LL;
unsigned long long int var_7 = 12378876379595245954ULL;
signed char var_9 = (signed char)-13;
unsigned long long int var_10 = 14994626322584566762ULL;
unsigned short var_11 = (unsigned short)35734;
unsigned short var_14 = (unsigned short)23277;
unsigned int var_16 = 4162900390U;
int zero = 0;
signed char var_20 = (signed char)104;
unsigned short var_21 = (unsigned short)28010;
unsigned long long int var_22 = 15221901313900506405ULL;
unsigned long long int var_23 = 15800985000996403253ULL;
unsigned int var_24 = 70706448U;
signed char var_25 = (signed char)-92;
unsigned short var_26 = (unsigned short)34642;
unsigned long long int arr_2 [10] ;
unsigned long long int arr_3 [10] ;
unsigned long long int arr_7 [25] ;
unsigned short arr_9 [25] ;
unsigned short arr_10 [25] [25] [25] ;
unsigned short arr_13 [25] [25] [25] ;
int arr_15 [25] [25] ;
unsigned char arr_6 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 8132579077536414149ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 13170823824616753471ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 5381160214575465840ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (unsigned short)54997;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)42658;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)6204;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = -332420586;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)247;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
