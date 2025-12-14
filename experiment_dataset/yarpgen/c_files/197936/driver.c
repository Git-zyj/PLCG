#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7794954663628536059LL;
long long int var_2 = -2298793397807260946LL;
unsigned int var_4 = 3492066994U;
unsigned int var_5 = 3265857757U;
long long int var_6 = 3042684438502067545LL;
unsigned int var_7 = 827368440U;
unsigned int var_8 = 2150000544U;
unsigned int var_11 = 555198697U;
long long int var_12 = 2289942249548599465LL;
int zero = 0;
unsigned int var_13 = 1430683054U;
long long int var_14 = -8346485281941873522LL;
unsigned int var_15 = 3109442293U;
long long int var_16 = 7146112921035847494LL;
long long int arr_0 [24] [24] ;
long long int arr_1 [24] ;
unsigned int arr_4 [12] ;
unsigned int arr_5 [12] [12] ;
long long int arr_6 [12] ;
unsigned int arr_2 [24] ;
long long int arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = -4407496493067960191LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1772877028870073217LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 2537132690U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 2706436424U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -8287992257179106365LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 705533012U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = -1597462037828539624LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
