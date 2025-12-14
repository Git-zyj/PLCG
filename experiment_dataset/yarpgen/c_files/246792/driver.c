#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2853470497769522503LL;
int var_8 = 2052826368;
short var_10 = (short)-28811;
int var_11 = 1543834422;
unsigned long long int var_12 = 14119798789953597527ULL;
unsigned long long int var_14 = 5383895661042292520ULL;
int var_16 = -2019030878;
short var_17 = (short)8918;
long long int var_18 = -8361739121844376020LL;
int zero = 0;
long long int var_19 = 7937637715541079289LL;
long long int var_20 = 6896540499251896827LL;
short var_21 = (short)-18282;
signed char var_22 = (signed char)-105;
signed char var_23 = (signed char)87;
short var_24 = (short)20744;
unsigned char arr_0 [10] ;
unsigned int arr_1 [10] ;
long long int arr_2 [10] ;
long long int arr_6 [18] ;
_Bool arr_11 [12] [12] ;
int arr_3 [10] ;
signed char arr_7 [18] [18] ;
int arr_8 [18] ;
long long int arr_13 [12] ;
short arr_14 [12] [12] ;
long long int arr_15 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 3005085011U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 7738135372888144448LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 7347398798207360723LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -764544381;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = -1689993050;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = 5227361822914571872LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-1756;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = -2855576771012299929LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
