#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)75;
_Bool var_3 = (_Bool)1;
short var_6 = (short)21046;
unsigned char var_8 = (unsigned char)47;
unsigned long long int var_9 = 1177804981723938707ULL;
int var_11 = 942275744;
long long int var_12 = 7449206863185622011LL;
int zero = 0;
unsigned short var_14 = (unsigned short)13446;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 4005121655173258870ULL;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-29;
unsigned short var_19 = (unsigned short)58179;
unsigned int var_20 = 1389866801U;
short var_21 = (short)5943;
short var_22 = (short)22686;
unsigned int arr_0 [19] [19] ;
unsigned short arr_1 [19] [19] ;
int arr_4 [19] ;
signed char arr_7 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 1057016534U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)14196;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 1826501271;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-115;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
