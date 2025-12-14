#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)85;
unsigned char var_2 = (unsigned char)232;
int var_3 = 608876670;
int var_5 = 2028451257;
unsigned char var_9 = (unsigned char)163;
unsigned char var_11 = (unsigned char)67;
unsigned char var_13 = (unsigned char)190;
unsigned char var_14 = (unsigned char)197;
int zero = 0;
int var_17 = -986394631;
unsigned char var_18 = (unsigned char)122;
unsigned char var_19 = (unsigned char)197;
unsigned char arr_0 [24] ;
int arr_1 [24] [24] ;
int arr_2 [24] ;
unsigned char arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 1896755289;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 124514729;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)193;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
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
