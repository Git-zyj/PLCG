#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22117;
short var_3 = (short)31158;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)20;
unsigned long long int var_9 = 15656905339961950393ULL;
unsigned short var_14 = (unsigned short)11181;
unsigned char var_17 = (unsigned char)76;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1761661930U;
unsigned long long int var_22 = 11258665705883830585ULL;
int var_23 = 861631948;
short var_24 = (short)-8669;
long long int var_25 = 5363040899689998495LL;
int var_26 = -1485689718;
long long int arr_1 [12] ;
unsigned short arr_4 [12] ;
unsigned int arr_2 [12] [12] ;
short arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -5133491297221371715LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)25459;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 3247175917U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (short)14972;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
