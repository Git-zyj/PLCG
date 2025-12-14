#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5736657752335976284LL;
unsigned char var_1 = (unsigned char)205;
int var_6 = 1286893981;
int var_10 = 892298710;
int zero = 0;
long long int var_13 = -3722054402363393258LL;
int var_14 = -135192407;
long long int var_15 = -4360193932550878733LL;
unsigned long long int arr_0 [14] [14] ;
long long int arr_3 [14] ;
unsigned int arr_5 [14] [14] ;
unsigned int arr_6 [14] [14] [14] ;
unsigned char arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 15746153421859836725ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 8596220864257983612LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 3574360304U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1774299608U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (unsigned char)27;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
