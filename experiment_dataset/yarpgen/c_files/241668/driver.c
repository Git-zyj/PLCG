#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)9019;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-111;
int var_19 = -734025539;
signed char var_20 = (signed char)-60;
short var_21 = (short)25107;
unsigned char var_22 = (unsigned char)248;
long long int var_23 = 6587202289540995965LL;
short arr_4 [12] [12] ;
int arr_9 [12] ;
long long int arr_10 [20] [20] ;
unsigned short arr_11 [20] [20] ;
short arr_12 [20] ;
long long int arr_13 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-952;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 644966084;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = -5645019360536662209LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)57201;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (short)3482;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = -3880653132403306786LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
