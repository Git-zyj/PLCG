#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)4;
unsigned int var_1 = 1255949668U;
unsigned int var_3 = 2650702985U;
unsigned int var_4 = 3759274336U;
int var_7 = -714657379;
unsigned int var_12 = 3389244476U;
int var_13 = -417503852;
short var_16 = (short)-16203;
int zero = 0;
unsigned long long int var_18 = 11098714058136201244ULL;
long long int var_19 = -2477899959634778204LL;
int var_20 = -713816607;
int var_21 = -859248529;
long long int var_22 = 3911004093712000756LL;
unsigned char var_23 = (unsigned char)16;
int arr_3 [23] [23] ;
unsigned long long int arr_5 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = -220751694;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 14486234370965328147ULL : 10367301345330590885ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
