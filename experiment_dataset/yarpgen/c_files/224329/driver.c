#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5176426560514553135ULL;
unsigned short var_4 = (unsigned short)43676;
long long int var_6 = 4141180857453434960LL;
_Bool var_10 = (_Bool)0;
long long int var_11 = 6410086879089714653LL;
unsigned long long int var_12 = 5858254210401592568ULL;
unsigned short var_13 = (unsigned short)3481;
signed char var_15 = (signed char)-75;
int zero = 0;
short var_16 = (short)20509;
unsigned short var_17 = (unsigned short)49357;
unsigned char var_18 = (unsigned char)122;
unsigned short arr_0 [23] ;
int arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)54389;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 1071404799;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
