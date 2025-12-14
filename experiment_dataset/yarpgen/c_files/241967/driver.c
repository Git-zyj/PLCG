#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26634;
unsigned long long int var_2 = 483047087807603326ULL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)44843;
unsigned short var_5 = (unsigned short)44147;
unsigned int var_6 = 2365174190U;
signed char var_7 = (signed char)-8;
unsigned int var_8 = 1614268969U;
unsigned short var_9 = (unsigned short)26805;
unsigned int var_11 = 4154345041U;
int zero = 0;
unsigned long long int var_13 = 532553888904827412ULL;
unsigned short var_14 = (unsigned short)37996;
unsigned short var_15 = (unsigned short)17416;
unsigned long long int var_16 = 13224166400279543357ULL;
unsigned int var_17 = 3121695768U;
_Bool arr_3 [10] ;
int arr_4 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1873436233;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
