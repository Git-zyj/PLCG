#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-33;
unsigned char arr_0 [20] [20] ;
long long int arr_1 [20] ;
unsigned long long int arr_2 [20] ;
long long int arr_3 [20] ;
long long int arr_4 [20] ;
long long int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -8574622999518935952LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 17989098593648236144ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 8676095823415287622LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 889031041774237797LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = -1695668310492621564LL;
}

void checksum() {
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
