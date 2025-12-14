#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1405426070U;
unsigned char var_1 = (unsigned char)123;
unsigned long long int var_2 = 16136023273790418920ULL;
unsigned char var_5 = (unsigned char)236;
unsigned char var_10 = (unsigned char)179;
int zero = 0;
long long int var_11 = 6721433144890470721LL;
long long int var_12 = 4248281319975083170LL;
unsigned long long int var_13 = 10350109402093465855ULL;
unsigned int var_14 = 3945147733U;
unsigned char var_15 = (unsigned char)192;
int var_16 = 53388665;
unsigned int var_17 = 436193344U;
unsigned char var_18 = (unsigned char)250;
unsigned char var_19 = (unsigned char)67;
unsigned int var_20 = 208724337U;
unsigned int var_21 = 2981720101U;
int arr_0 [15] ;
unsigned char arr_2 [20] ;
unsigned char arr_4 [20] ;
signed char arr_5 [20] ;
signed char arr_6 [20] ;
unsigned int arr_9 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1080484434 : -1710817211;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = 584804277U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
