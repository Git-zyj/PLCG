#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1759352013;
signed char var_2 = (signed char)-64;
unsigned long long int var_4 = 9137745668743823809ULL;
unsigned short var_5 = (unsigned short)21158;
unsigned long long int var_7 = 6978508444129742133ULL;
unsigned char var_9 = (unsigned char)205;
unsigned long long int var_10 = 4589065827584696199ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)32226;
int var_12 = -820115921;
unsigned char var_13 = (unsigned char)233;
unsigned short var_14 = (unsigned short)20897;
unsigned int var_15 = 3533428345U;
signed char arr_0 [23] ;
short arr_2 [23] ;
int arr_3 [23] ;
int arr_4 [23] [23] ;
signed char arr_6 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-29397;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -571168052;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 760143536;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-123;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
