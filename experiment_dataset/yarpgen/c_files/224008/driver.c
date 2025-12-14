#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12953530781592649596ULL;
unsigned long long int var_5 = 8576167236485214304ULL;
unsigned long long int var_7 = 8738327900606544342ULL;
unsigned long long int var_11 = 2181991327691552127ULL;
int zero = 0;
unsigned long long int var_12 = 5283048919031355698ULL;
unsigned long long int var_13 = 1508609880698683064ULL;
unsigned long long int var_14 = 14697290109069213068ULL;
unsigned long long int var_15 = 10402092453559465447ULL;
unsigned long long int var_16 = 6853160592692478248ULL;
unsigned long long int var_17 = 6311297326868189592ULL;
unsigned long long int arr_1 [10] ;
unsigned long long int arr_4 [10] ;
unsigned long long int arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 17572073455067208960ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 17019973299400414381ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 308408209669793414ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
