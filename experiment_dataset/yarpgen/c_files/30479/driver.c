#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 4820058528769458312ULL;
unsigned int var_4 = 2531641702U;
long long int var_7 = 6201047109719884141LL;
unsigned short var_8 = (unsigned short)15889;
unsigned short var_10 = (unsigned short)63470;
unsigned int var_11 = 591782213U;
int zero = 0;
short var_12 = (short)-29746;
unsigned long long int var_13 = 13837428102866201927ULL;
long long int var_14 = 4807055879099752331LL;
unsigned short arr_0 [23] [23] ;
short arr_2 [23] ;
int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)56332;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-30274;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = -155273857;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
