#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50395;
short var_1 = (short)11459;
unsigned char var_3 = (unsigned char)59;
long long int var_4 = 6595856356958797364LL;
signed char var_5 = (signed char)108;
unsigned short var_6 = (unsigned short)10942;
unsigned short var_7 = (unsigned short)24623;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)2751;
unsigned short var_11 = (unsigned short)38547;
unsigned short var_12 = (unsigned short)59642;
long long int var_13 = -5874689042193103176LL;
int var_14 = 1524172201;
short var_15 = (short)16695;
long long int var_16 = 2771468487932308414LL;
signed char var_17 = (signed char)125;
unsigned int var_18 = 71208123U;
signed char var_19 = (signed char)109;
unsigned int var_20 = 3254262137U;
short var_21 = (short)23609;
short var_22 = (short)404;
unsigned short arr_0 [23] [23] ;
signed char arr_1 [23] [23] ;
long long int arr_3 [16] ;
long long int arr_4 [16] [16] ;
_Bool arr_5 [16] [16] ;
signed char arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)27448;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 8385628128818603993LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 7457821551399639933LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-17;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
