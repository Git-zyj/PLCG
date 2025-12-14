#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 972791086;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-5193;
unsigned int var_13 = 1875111002U;
int zero = 0;
long long int var_15 = -4032020698718545992LL;
long long int var_16 = -2108941903271616140LL;
_Bool var_17 = (_Bool)1;
int var_18 = 242077024;
unsigned int var_19 = 3733235445U;
_Bool var_20 = (_Bool)1;
int var_21 = 1297636336;
long long int var_22 = 2752179248851979976LL;
short var_23 = (short)3582;
int var_24 = 1271835470;
short var_25 = (short)22603;
int var_26 = 1947413091;
long long int arr_0 [23] ;
unsigned int arr_1 [23] [23] ;
unsigned int arr_2 [23] ;
_Bool arr_3 [15] ;
long long int arr_4 [15] ;
signed char arr_7 [15] ;
_Bool arr_9 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2123223498253578230LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 1806405493U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 2624978149U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 4252087199225509219LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
