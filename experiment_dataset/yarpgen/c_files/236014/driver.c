#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10361;
signed char var_1 = (signed char)17;
int var_3 = -1510071042;
unsigned int var_6 = 3086446005U;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)4488;
int zero = 0;
short var_11 = (short)-3994;
unsigned char var_12 = (unsigned char)242;
short var_13 = (short)-30697;
short var_14 = (short)10351;
signed char var_15 = (signed char)91;
long long int var_16 = -1447667859496520340LL;
unsigned short var_17 = (unsigned short)21930;
long long int arr_0 [16] ;
unsigned int arr_1 [16] ;
short arr_2 [16] ;
short arr_4 [23] ;
int arr_5 [23] ;
long long int arr_3 [16] ;
unsigned int arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -2734098947905940076LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 147935045U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)7290;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)11367;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 568515440;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -3840373397148889514LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 3090977496U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
