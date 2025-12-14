#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2025849272;
short var_5 = (short)14274;
unsigned int var_11 = 1384744533U;
short var_12 = (short)20242;
short var_13 = (short)25205;
long long int var_16 = -8915404371769837360LL;
unsigned int var_17 = 3569157155U;
int zero = 0;
long long int var_18 = 142524922711507977LL;
signed char var_19 = (signed char)114;
short var_20 = (short)-4938;
unsigned int var_21 = 1403023972U;
short var_22 = (short)-3162;
unsigned char var_23 = (unsigned char)232;
unsigned char var_24 = (unsigned char)201;
signed char arr_0 [10] [10] ;
unsigned char arr_1 [10] ;
short arr_2 [10] [10] ;
int arr_3 [10] ;
unsigned char arr_10 [24] [24] ;
unsigned char arr_11 [24] ;
short arr_9 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-12816;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -1491640631;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (short)-16828;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
