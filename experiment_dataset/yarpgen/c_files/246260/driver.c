#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5073734496130278387ULL;
int var_1 = 1144808618;
unsigned int var_5 = 2070955224U;
unsigned long long int var_6 = 4636330954226857905ULL;
unsigned char var_8 = (unsigned char)170;
int zero = 0;
unsigned int var_11 = 3231174598U;
unsigned long long int var_12 = 9574301489897610013ULL;
unsigned short var_13 = (unsigned short)17712;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)27;
unsigned int var_16 = 3891606825U;
unsigned int arr_0 [13] ;
int arr_1 [13] [13] ;
signed char arr_2 [13] ;
short arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 2537651167U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 783228542;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)15539;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
