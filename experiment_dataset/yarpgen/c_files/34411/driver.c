#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -848930492;
long long int var_2 = -68163547214568412LL;
long long int var_5 = -9083427705400530729LL;
long long int var_9 = 2104924907206477139LL;
long long int var_11 = -4686390877501999402LL;
unsigned int var_13 = 3896488471U;
int zero = 0;
long long int var_16 = -1682547805971390993LL;
signed char var_17 = (signed char)39;
unsigned long long int var_18 = 14934325858939008408ULL;
unsigned int var_19 = 3764148232U;
long long int var_20 = -8570638578895393049LL;
unsigned int var_21 = 1491435091U;
unsigned short var_22 = (unsigned short)3013;
signed char arr_0 [11] ;
long long int arr_1 [11] ;
int arr_3 [11] ;
signed char arr_7 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 5985162826472810038LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -817744453;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)50;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
