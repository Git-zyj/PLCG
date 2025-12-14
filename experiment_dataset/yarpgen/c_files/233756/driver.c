#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2914026587774222445ULL;
unsigned long long int var_6 = 15252555247124996961ULL;
unsigned long long int var_9 = 13540540212985157289ULL;
unsigned long long int var_13 = 17062560435979371629ULL;
unsigned long long int var_14 = 12758943017070191377ULL;
unsigned long long int var_15 = 11351229763770605170ULL;
int zero = 0;
unsigned long long int var_16 = 13482226164122543652ULL;
unsigned long long int var_17 = 10951328886113574231ULL;
unsigned long long int var_18 = 2467815170926066517ULL;
unsigned long long int var_19 = 12212773107890278707ULL;
unsigned long long int var_20 = 14621970713972466179ULL;
unsigned long long int arr_0 [21] ;
unsigned long long int arr_1 [21] ;
unsigned long long int arr_2 [21] ;
unsigned long long int arr_3 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 8861123466528261380ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 15670783597004708329ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 8361860369681792317ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 3329974644898895077ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
