#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8361690248033234011ULL;
int var_1 = 344023427;
unsigned int var_2 = 781429405U;
unsigned char var_5 = (unsigned char)214;
unsigned long long int var_12 = 432508810754446059ULL;
unsigned long long int var_17 = 8058932885069101151ULL;
int zero = 0;
signed char var_20 = (signed char)-119;
short var_21 = (short)5713;
signed char var_22 = (signed char)11;
int var_23 = 683435678;
long long int var_24 = -4327155980327915028LL;
signed char var_25 = (signed char)-104;
_Bool arr_2 [15] ;
_Bool arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
