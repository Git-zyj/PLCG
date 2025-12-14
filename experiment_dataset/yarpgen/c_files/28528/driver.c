#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2555322068U;
unsigned int var_7 = 2243854920U;
unsigned int var_13 = 2727976137U;
short var_14 = (short)14258;
unsigned short var_15 = (unsigned short)4365;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 510231838U;
int zero = 0;
long long int var_18 = -2122520239368642037LL;
unsigned short var_19 = (unsigned short)24251;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-29969;
short arr_1 [23] [23] ;
unsigned long long int arr_3 [23] ;
unsigned short arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)10065;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 11930288023968467941ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned short)15551;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
