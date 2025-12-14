#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2949886039U;
short var_2 = (short)-190;
short var_3 = (short)20644;
unsigned long long int var_4 = 9653165743861210949ULL;
short var_5 = (short)10619;
short var_7 = (short)2617;
short var_8 = (short)-7266;
short var_9 = (short)-20934;
short var_13 = (short)20435;
unsigned int var_15 = 141640507U;
int zero = 0;
short var_20 = (short)5473;
unsigned int var_21 = 4251314478U;
unsigned long long int var_22 = 18049926040669056112ULL;
unsigned long long int var_23 = 10705616595502158832ULL;
short var_24 = (short)25683;
unsigned int var_25 = 2899154018U;
short var_26 = (short)14589;
unsigned long long int arr_0 [21] ;
short arr_6 [25] [25] ;
short arr_7 [25] ;
short arr_8 [25] ;
unsigned int arr_9 [25] ;
short arr_10 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 9735861375333232218ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-22591 : (short)4709;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (short)4684;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (short)-13553;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1058754228U : 3021784860U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)12305 : (short)-31720;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
