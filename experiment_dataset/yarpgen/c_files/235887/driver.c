#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)59;
short var_5 = (short)-15546;
unsigned long long int var_9 = 8818993857237874962ULL;
unsigned char var_11 = (unsigned char)101;
unsigned long long int var_12 = 5437870855615559345ULL;
_Bool var_13 = (_Bool)1;
int var_17 = -1028431619;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 2095900614U;
signed char var_20 = (signed char)(-127 - 1);
int arr_0 [22] ;
unsigned char arr_2 [22] [22] ;
short arr_3 [22] ;
unsigned int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -35594605;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)-2127;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 1805846719U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
