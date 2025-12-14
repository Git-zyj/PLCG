#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1127858436U;
unsigned long long int var_5 = 4985690960029798967ULL;
int var_7 = -63663051;
signed char var_9 = (signed char)87;
short var_16 = (short)31328;
unsigned char var_17 = (unsigned char)107;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_20 = 4700012257402627068LL;
unsigned int var_21 = 1286595054U;
unsigned long long int var_22 = 17001068669417278387ULL;
signed char var_23 = (signed char)-31;
int var_24 = -2111579862;
_Bool var_25 = (_Bool)0;
unsigned int var_26 = 2265840150U;
_Bool var_27 = (_Bool)0;
unsigned char arr_0 [12] [12] ;
int arr_1 [12] ;
unsigned int arr_2 [12] [12] ;
short arr_4 [12] ;
int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1409239749 : -1530382569;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 3004502782U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (short)31506;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -207408948 : 63831278;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
