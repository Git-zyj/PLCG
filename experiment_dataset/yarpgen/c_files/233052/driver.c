#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)222;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 6479882015118444078ULL;
unsigned char var_6 = (unsigned char)88;
unsigned int var_7 = 3622716664U;
long long int var_12 = 4756377116430780963LL;
unsigned int var_13 = 4064938147U;
signed char var_17 = (signed char)84;
int zero = 0;
short var_18 = (short)25621;
_Bool var_19 = (_Bool)1;
long long int var_20 = -7490497313493266819LL;
int var_21 = 908158566;
long long int var_22 = 7765914733062397183LL;
unsigned long long int var_23 = 10636426505807096345ULL;
signed char var_24 = (signed char)39;
unsigned long long int arr_0 [23] ;
unsigned int arr_1 [23] ;
int arr_2 [23] ;
unsigned long long int arr_4 [23] [23] ;
unsigned long long int arr_6 [23] [23] [23] ;
short arr_9 [23] [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3284823661972993286ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 3659029690U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 2101373282;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 8168403380523946466ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 12322933304827213374ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)11266;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
