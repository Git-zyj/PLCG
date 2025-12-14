#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5743169525206387098ULL;
_Bool var_1 = (_Bool)1;
signed char var_5 = (signed char)-63;
unsigned short var_8 = (unsigned short)57732;
int zero = 0;
unsigned short var_10 = (unsigned short)63848;
unsigned long long int var_11 = 6548783124558070357ULL;
short var_12 = (short)27802;
signed char var_13 = (signed char)-61;
unsigned int var_14 = 2564820286U;
unsigned short var_15 = (unsigned short)12622;
unsigned char var_16 = (unsigned char)98;
int arr_0 [11] [11] ;
long long int arr_3 [11] [11] ;
long long int arr_8 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 484816378;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 940759437577214272LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = 6587556827130842356LL;
}

void checksum() {
    hash(&seed, var_10);
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
