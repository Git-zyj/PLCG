#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24842;
unsigned int var_2 = 3905796095U;
short var_5 = (short)31763;
unsigned long long int var_6 = 8377297679904308021ULL;
unsigned short var_9 = (unsigned short)45741;
long long int var_12 = -1141809581340653377LL;
unsigned long long int var_13 = 16524734665094725627ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 2490976402U;
unsigned short var_20 = (unsigned short)57000;
short var_21 = (short)-28536;
_Bool var_22 = (_Bool)0;
int var_23 = 350729830;
int var_24 = -1217966006;
unsigned long long int arr_0 [16] [16] ;
short arr_1 [16] ;
unsigned long long int arr_2 [16] ;
unsigned int arr_3 [16] ;
int arr_5 [16] ;
unsigned int arr_6 [16] ;
short arr_7 [16] [16] ;
short arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 15500819402118601140ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)-13052;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 10818585814685747965ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 4211533971U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 1757664413;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 1190237936U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-27957;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (short)-11540;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
