#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 6480071053000560479LL;
unsigned int var_13 = 2691473078U;
int zero = 0;
unsigned short var_16 = (unsigned short)64526;
signed char var_17 = (signed char)-99;
unsigned char var_18 = (unsigned char)13;
int var_19 = 1026152582;
short var_20 = (short)29605;
unsigned int var_21 = 1888727178U;
unsigned short var_22 = (unsigned short)52618;
unsigned int var_23 = 1513177397U;
unsigned long long int var_24 = 1222655989889934931ULL;
short var_25 = (short)-22303;
unsigned int var_26 = 1409011400U;
signed char var_27 = (signed char)-99;
int arr_5 [15] ;
unsigned long long int arr_15 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 2069037025;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 7478174176897198701ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
