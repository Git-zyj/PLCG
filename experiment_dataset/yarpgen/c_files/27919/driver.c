#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4088730787U;
unsigned short var_2 = (unsigned short)63912;
unsigned int var_3 = 2701759059U;
long long int var_6 = 5214507047966443432LL;
unsigned short var_8 = (unsigned short)15592;
long long int var_10 = 7173610587134357041LL;
unsigned int var_11 = 607210261U;
long long int var_12 = -6990071581028104981LL;
unsigned short var_15 = (unsigned short)59932;
unsigned int var_16 = 1792054286U;
int zero = 0;
unsigned int var_17 = 13520271U;
unsigned int var_18 = 3920187419U;
unsigned short var_19 = (unsigned short)32063;
unsigned int var_20 = 70180402U;
unsigned short var_21 = (unsigned short)4483;
unsigned short var_22 = (unsigned short)5974;
unsigned short var_23 = (unsigned short)63420;
long long int var_24 = -7764493578161400100LL;
long long int arr_0 [16] ;
unsigned short arr_1 [16] ;
unsigned int arr_3 [20] ;
long long int arr_4 [20] [20] ;
unsigned int arr_5 [20] ;
long long int arr_10 [20] [20] ;
unsigned short arr_2 [16] ;
unsigned int arr_6 [20] ;
unsigned int arr_7 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 9082495390601142471LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)58378;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 2029681534U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 8514595717704302214LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 888532925U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = 8762118631286021261LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)11501;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 1482661159U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = 2467756518U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
