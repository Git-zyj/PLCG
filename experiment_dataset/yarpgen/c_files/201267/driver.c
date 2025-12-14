#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1182250416U;
signed char var_1 = (signed char)-28;
unsigned int var_4 = 4290541351U;
unsigned int var_5 = 3571164384U;
signed char var_6 = (signed char)-70;
signed char var_9 = (signed char)-88;
unsigned int var_10 = 1922964188U;
unsigned int var_12 = 2415536904U;
signed char var_13 = (signed char)-104;
unsigned int var_14 = 103185860U;
unsigned int var_15 = 2836899893U;
signed char var_16 = (signed char)16;
int zero = 0;
signed char var_19 = (signed char)-60;
unsigned int var_20 = 2245445213U;
signed char var_21 = (signed char)-111;
signed char var_22 = (signed char)13;
unsigned int var_23 = 761020543U;
signed char arr_0 [23] ;
unsigned int arr_1 [23] [23] ;
unsigned int arr_2 [23] [23] ;
signed char arr_3 [23] [23] ;
unsigned int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-56;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 808677830U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 261575280U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 1930920723U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
