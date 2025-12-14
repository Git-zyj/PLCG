#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 8376775314536828393LL;
long long int var_8 = -8473127671993974592LL;
unsigned int var_12 = 715433488U;
int zero = 0;
unsigned short var_19 = (unsigned short)28735;
int var_20 = 1996913318;
_Bool var_21 = (_Bool)1;
long long int var_22 = -7000894071765370197LL;
int var_23 = -1303818070;
unsigned int var_24 = 798975040U;
signed char var_25 = (signed char)-125;
unsigned int var_26 = 4049463429U;
unsigned long long int arr_0 [23] ;
short arr_1 [23] ;
int arr_3 [11] ;
signed char arr_16 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 15474250524895539151ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-10822;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -306667027;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (signed char)3;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
