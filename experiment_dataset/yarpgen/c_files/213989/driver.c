#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1521314388;
unsigned int var_1 = 3819545768U;
unsigned int var_4 = 3198079791U;
short var_9 = (short)13531;
unsigned int var_11 = 4205783405U;
short var_14 = (short)11086;
int zero = 0;
long long int var_19 = 1116879708300381748LL;
unsigned int var_20 = 999145644U;
int var_21 = 1426286697;
int var_22 = 1133367177;
unsigned int var_23 = 77667479U;
int arr_0 [22] ;
unsigned int arr_1 [22] [22] ;
signed char arr_2 [22] ;
int arr_3 [22] [22] ;
unsigned int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -340375951;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 300106533U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -868542052;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 2206056047U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
