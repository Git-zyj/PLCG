#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15504330581944759673ULL;
unsigned long long int var_4 = 7608046337278666314ULL;
unsigned long long int var_5 = 17758805037710990783ULL;
unsigned long long int var_9 = 8191619231613975536ULL;
unsigned long long int var_17 = 13688677952575382763ULL;
int zero = 0;
unsigned long long int var_18 = 16275832700330849527ULL;
unsigned long long int var_19 = 11075359391496428276ULL;
unsigned long long int arr_2 [25] [25] ;
unsigned long long int arr_3 [25] ;
unsigned long long int arr_4 [25] [25] ;
unsigned long long int arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 828995142983529310ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 14399776885161250465ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 4162335850748807595ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 2016883384446553411ULL : 9533793734403257330ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
