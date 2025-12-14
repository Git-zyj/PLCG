#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22182;
unsigned short var_4 = (unsigned short)30345;
_Bool var_5 = (_Bool)0;
long long int var_7 = -7101375485635273718LL;
int var_8 = 2056629177;
unsigned short var_9 = (unsigned short)63350;
unsigned int var_14 = 68786420U;
unsigned char var_15 = (unsigned char)155;
int zero = 0;
long long int var_16 = -6956726604117949446LL;
long long int var_17 = 5884265416554584276LL;
_Bool var_18 = (_Bool)1;
long long int var_19 = 478805685516105409LL;
unsigned int var_20 = 2831195193U;
unsigned char arr_0 [23] ;
unsigned int arr_2 [23] ;
_Bool arr_3 [23] ;
signed char arr_4 [23] ;
unsigned short arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 3872175643U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)64892;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
