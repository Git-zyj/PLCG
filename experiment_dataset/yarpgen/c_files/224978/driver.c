#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)140;
long long int var_3 = -263550890044159353LL;
long long int var_4 = -2078942875116010871LL;
signed char var_6 = (signed char)76;
long long int var_9 = 1591832416324408913LL;
int zero = 0;
short var_10 = (short)1261;
unsigned long long int var_11 = 7040961292993770552ULL;
unsigned int var_12 = 1126532931U;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)176;
signed char var_15 = (signed char)71;
unsigned int arr_0 [24] ;
int arr_4 [24] [24] [24] ;
int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 1407147005U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1252841897;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = -960632460;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
