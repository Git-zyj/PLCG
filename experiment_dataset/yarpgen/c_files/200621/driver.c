#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12443759891749898613ULL;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)73;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)43926;
unsigned long long int var_10 = 8856195306525901084ULL;
unsigned int var_15 = 2599717048U;
int var_16 = 1583394122;
unsigned int var_17 = 1037323923U;
unsigned int var_18 = 3987158579U;
int zero = 0;
int var_19 = 1855177718;
int var_20 = -704829796;
signed char var_21 = (signed char)-47;
unsigned long long int var_22 = 13627744899170052239ULL;
unsigned short var_23 = (unsigned short)34145;
_Bool arr_0 [15] [15] ;
unsigned int arr_6 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 4205549620U;
}

void checksum() {
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
