#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)59447;
unsigned long long int var_9 = 13267919229832459866ULL;
long long int var_10 = 3923225410323942444LL;
int var_12 = -1811060790;
int var_15 = 151644781;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -8409642666273601369LL;
long long int var_21 = -798852756782052034LL;
short var_22 = (short)-30154;
long long int var_23 = 1092231188854613279LL;
unsigned int var_24 = 2891525563U;
_Bool var_25 = (_Bool)0;
short arr_0 [18] ;
unsigned int arr_1 [18] ;
unsigned int arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-8550;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 2282602643U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 1878082877U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
