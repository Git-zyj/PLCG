#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30278;
signed char var_1 = (signed char)71;
unsigned long long int var_2 = 850025457474010533ULL;
short var_9 = (short)1207;
int zero = 0;
short var_12 = (short)-14050;
unsigned long long int var_13 = 8886161578777381869ULL;
unsigned long long int var_14 = 16544780592287536398ULL;
short var_15 = (short)13494;
short var_16 = (short)-20545;
int var_17 = 198631763;
short var_18 = (short)25165;
unsigned long long int var_19 = 11923513707296098296ULL;
int var_20 = -1304811040;
signed char var_21 = (signed char)-1;
unsigned long long int arr_6 [14] [14] ;
signed char arr_7 [14] [14] ;
int arr_8 [14] [14] ;
unsigned long long int arr_11 [21] ;
short arr_14 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 5623626972937600433ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = -2000731438;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 12557728620512657012ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = (short)24521;
}

void checksum() {
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
