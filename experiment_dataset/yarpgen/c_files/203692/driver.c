#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1614190778;
_Bool var_4 = (_Bool)1;
unsigned char var_13 = (unsigned char)170;
int zero = 0;
long long int var_16 = -2300414756461531672LL;
int var_17 = -1925739874;
long long int var_18 = -799540561716405747LL;
unsigned long long int var_19 = 11577156457018239417ULL;
int var_20 = 1037662065;
int var_21 = -2023387216;
unsigned long long int var_22 = 2343264241466789692ULL;
short arr_7 [11] ;
long long int arr_10 [12] ;
unsigned long long int arr_9 [11] ;
int arr_12 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-32446 : (short)-27528;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 1385982194306220156LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 12577281887187162405ULL : 7763317086812551064ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = 1907046082;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
