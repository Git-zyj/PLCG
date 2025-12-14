#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)236;
unsigned int var_4 = 3308608513U;
unsigned int var_9 = 4179402578U;
unsigned int var_10 = 1514419929U;
long long int var_11 = -1643381619152640317LL;
unsigned int var_13 = 1443804586U;
int zero = 0;
unsigned int var_14 = 115663332U;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)62;
unsigned long long int var_17 = 18381404504095559781ULL;
long long int var_18 = 7304955594886133571LL;
long long int arr_4 [20] [20] ;
int arr_8 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -5502102384207726951LL : -3302149073943057798LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2083310198 : 114065597;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
