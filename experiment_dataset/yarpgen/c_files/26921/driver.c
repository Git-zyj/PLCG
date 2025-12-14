#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 805441270581946085ULL;
unsigned int var_1 = 1731560645U;
long long int var_6 = 2845943174553987981LL;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2041192442U;
int zero = 0;
int var_13 = -1806372749;
unsigned char var_14 = (unsigned char)163;
unsigned char var_15 = (unsigned char)134;
unsigned char arr_1 [12] [12] ;
long long int arr_2 [12] ;
unsigned char arr_5 [12] ;
long long int arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -8107722915160016541LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 7389386811176934968LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
