#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)67;
long long int var_7 = 1209847132413678382LL;
unsigned char var_9 = (unsigned char)146;
short var_11 = (short)10177;
short var_14 = (short)-3941;
int zero = 0;
unsigned int var_15 = 3162354672U;
int var_16 = -2106111813;
signed char var_17 = (signed char)74;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 8805386864341112367ULL;
unsigned char var_20 = (unsigned char)168;
unsigned char var_21 = (unsigned char)131;
signed char var_22 = (signed char)-107;
unsigned int arr_0 [10] ;
signed char arr_1 [10] ;
_Bool arr_3 [10] [10] [10] ;
int arr_5 [10] ;
int arr_8 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1436996404U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 1150945320;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -1923234686;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
