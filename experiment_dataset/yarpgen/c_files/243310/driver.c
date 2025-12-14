#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53967;
unsigned long long int var_1 = 7716124532517226351ULL;
signed char var_2 = (signed char)-12;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 8056579693462781296ULL;
unsigned short var_7 = (unsigned short)44707;
unsigned long long int var_8 = 16594051142188413039ULL;
unsigned long long int var_9 = 6769801277776815179ULL;
_Bool var_10 = (_Bool)0;
int var_12 = -680290184;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int var_17 = 1027463535;
unsigned long long int var_18 = 16367797182293541375ULL;
signed char arr_0 [20] [20] ;
long long int arr_2 [20] ;
unsigned long long int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -7732599851993187835LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3965635859043700080ULL : 15256570792969225924ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
