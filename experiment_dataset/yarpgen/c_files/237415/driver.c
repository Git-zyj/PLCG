#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6737644075257489486ULL;
unsigned long long int var_2 = 11631133496832411947ULL;
int var_3 = 2131117934;
_Bool var_4 = (_Bool)0;
int var_10 = 1769353944;
long long int var_11 = -3318482434642012097LL;
unsigned char var_12 = (unsigned char)92;
int var_13 = -576836367;
int zero = 0;
long long int var_14 = -4885422879504172001LL;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)225;
unsigned int var_17 = 3266986033U;
signed char arr_0 [19] ;
long long int arr_2 [19] [19] ;
long long int arr_4 [19] ;
long long int arr_5 [19] ;
signed char arr_6 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 7894121792704194471LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -5609002201014864620LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 6147220399547355562LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-13;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
