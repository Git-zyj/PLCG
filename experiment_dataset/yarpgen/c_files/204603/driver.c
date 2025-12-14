#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10442520052519410373ULL;
unsigned int var_2 = 3773483353U;
short var_3 = (short)21691;
short var_5 = (short)7970;
signed char var_7 = (signed char)-69;
unsigned long long int var_8 = 9409355869654996300ULL;
int zero = 0;
unsigned long long int var_14 = 13578161351632524064ULL;
unsigned long long int var_15 = 882756831067572217ULL;
unsigned char var_16 = (unsigned char)2;
unsigned long long int var_17 = 16038005120273949295ULL;
unsigned long long int var_18 = 6743072617631893276ULL;
signed char var_19 = (signed char)84;
long long int arr_3 [17] [17] ;
unsigned int arr_5 [17] [17] [17] ;
short arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 7395539881745546348LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3937113666U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (short)24193;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
