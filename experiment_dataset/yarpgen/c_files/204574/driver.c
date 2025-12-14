#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)75;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)33109;
int var_5 = 468743150;
unsigned int var_6 = 1861304736U;
unsigned int var_7 = 1515517521U;
int var_8 = -2113760266;
int zero = 0;
signed char var_12 = (signed char)-99;
int var_13 = -980614845;
int var_14 = -968155873;
int var_15 = -2135320238;
_Bool var_16 = (_Bool)1;
int var_17 = 313537156;
unsigned int var_18 = 2816301361U;
unsigned int arr_3 [25] ;
_Bool arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 1514200871U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
