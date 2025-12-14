#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -649223904;
unsigned long long int var_6 = 8253951458324041213ULL;
long long int var_9 = 8715915420488583839LL;
unsigned long long int var_10 = 8440977406860262864ULL;
unsigned long long int var_11 = 10200349005681222795ULL;
int zero = 0;
unsigned int var_16 = 1649250119U;
int var_17 = 28749848;
int var_18 = -248157632;
long long int var_19 = -6950241743324092637LL;
unsigned char var_20 = (unsigned char)154;
int arr_0 [16] [16] ;
long long int arr_1 [16] [16] ;
int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -1037255469;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = -9110180244521519925LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -1183804130;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
