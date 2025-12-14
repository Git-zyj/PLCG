#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2961028231U;
unsigned char var_4 = (unsigned char)243;
unsigned int var_6 = 3974533894U;
unsigned short var_7 = (unsigned short)763;
unsigned int var_10 = 1758167381U;
unsigned int var_11 = 2694090743U;
int zero = 0;
signed char var_13 = (signed char)-22;
unsigned int var_14 = 1193095291U;
unsigned int var_15 = 205873299U;
unsigned int var_16 = 382497816U;
unsigned long long int var_17 = 9090101491563285158ULL;
unsigned int var_18 = 415418710U;
unsigned int var_19 = 591161275U;
unsigned short var_20 = (unsigned short)414;
unsigned long long int var_21 = 11882768939361568769ULL;
int arr_0 [20] ;
unsigned long long int arr_1 [20] ;
unsigned char arr_2 [20] ;
unsigned char arr_3 [25] ;
unsigned char arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 1559344594;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 15316771372818662227ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)216;
}

void checksum() {
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
