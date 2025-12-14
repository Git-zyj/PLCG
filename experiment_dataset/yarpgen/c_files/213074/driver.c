#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33221;
int var_1 = 1559046561;
unsigned int var_5 = 1273059962U;
unsigned short var_6 = (unsigned short)10816;
short var_8 = (short)18119;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)84;
unsigned short var_13 = (unsigned short)38186;
signed char var_14 = (signed char)110;
signed char var_15 = (signed char)86;
unsigned char var_16 = (unsigned char)213;
unsigned long long int arr_0 [21] ;
long long int arr_1 [21] ;
unsigned short arr_2 [21] [21] [21] ;
unsigned int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 1116106036607545806ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -653035490700202788LL : 1528680178078412386LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)42264;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 368004891U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
