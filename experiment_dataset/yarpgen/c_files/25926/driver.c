#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)24495;
unsigned int var_14 = 917298276U;
unsigned int var_15 = 4213481265U;
signed char var_17 = (signed char)69;
int zero = 0;
unsigned short var_19 = (unsigned short)37119;
unsigned short var_20 = (unsigned short)22544;
_Bool var_21 = (_Bool)0;
short var_22 = (short)8051;
unsigned int var_23 = 1268156220U;
unsigned long long int var_24 = 15526887238980390735ULL;
short var_25 = (short)-7563;
signed char var_26 = (signed char)115;
int var_27 = 1235481851;
unsigned short arr_0 [23] ;
int arr_1 [23] [23] ;
unsigned int arr_5 [23] ;
short arr_7 [23] [23] ;
long long int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)50415 : (unsigned short)16392;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? -1400092819 : 1927843702;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 1459498959U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-16532;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 8800140584332191385LL : -3106876578861487608LL;
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
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
