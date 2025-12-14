#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -9018091348384493632LL;
long long int var_9 = 8824357539887666334LL;
int zero = 0;
unsigned long long int var_19 = 17202816867739654224ULL;
unsigned long long int var_20 = 1405053456210796460ULL;
unsigned long long int var_21 = 10569821848055802447ULL;
int var_22 = 47743283;
signed char var_23 = (signed char)56;
_Bool var_24 = (_Bool)0;
unsigned int var_25 = 2276045364U;
long long int arr_0 [25] ;
short arr_1 [25] ;
unsigned long long int arr_4 [16] ;
int arr_5 [16] ;
unsigned int arr_2 [25] ;
_Bool arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 331917700599493465LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)-9639;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 9473657673714036165ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 2049855580;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 2732666256U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
