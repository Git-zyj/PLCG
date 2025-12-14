#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)78;
unsigned long long int var_1 = 14345218837809877908ULL;
short var_2 = (short)-9593;
int zero = 0;
unsigned short var_13 = (unsigned short)14273;
long long int var_14 = 7223882594999051463LL;
long long int var_15 = 4754128681419325530LL;
unsigned short var_16 = (unsigned short)61655;
unsigned short var_17 = (unsigned short)30304;
unsigned short var_18 = (unsigned short)49840;
_Bool var_19 = (_Bool)0;
long long int arr_0 [10] ;
_Bool arr_1 [10] ;
unsigned long long int arr_2 [10] ;
unsigned char arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 5484229734161447709LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 9344176276957226958ULL : 13941881259912402157ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)126;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
