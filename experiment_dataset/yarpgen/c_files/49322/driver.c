#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 71180651U;
long long int var_3 = 811119038549115263LL;
unsigned int var_4 = 4074019282U;
short var_5 = (short)32444;
unsigned int var_6 = 1641241044U;
signed char var_7 = (signed char)-111;
int var_10 = -1568783787;
long long int var_11 = -403510767248875158LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)72;
signed char arr_0 [19] ;
unsigned long long int arr_2 [19] ;
unsigned long long int arr_3 [19] ;
_Bool arr_5 [19] [19] [19] ;
unsigned int arr_6 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)59;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 11387512839791247183ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 9784913740322111738ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 2178234342U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
