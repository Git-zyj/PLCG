#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)208;
unsigned char var_1 = (unsigned char)125;
unsigned short var_3 = (unsigned short)50449;
unsigned long long int var_4 = 8405926555430504621ULL;
unsigned long long int var_7 = 1337050872010903803ULL;
unsigned short var_8 = (unsigned short)26407;
signed char var_9 = (signed char)39;
unsigned char var_10 = (unsigned char)199;
int zero = 0;
unsigned int var_11 = 3329049358U;
unsigned char var_12 = (unsigned char)100;
unsigned char var_13 = (unsigned char)41;
unsigned long long int var_14 = 2970706994983446356ULL;
unsigned long long int var_15 = 4930841587975465950ULL;
unsigned char var_16 = (unsigned char)198;
short var_17 = (short)8307;
int var_18 = -1894851471;
signed char arr_1 [25] ;
unsigned long long int arr_3 [25] ;
unsigned long long int arr_4 [25] [25] ;
unsigned short arr_9 [25] [25] ;
unsigned long long int arr_10 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 16964706291804320133ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 13597061047416764051ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)6029;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 6652466698537557196ULL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
