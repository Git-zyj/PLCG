#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1179954048309570948ULL;
short var_5 = (short)-182;
int var_7 = 1843177936;
signed char var_8 = (signed char)59;
short var_10 = (short)10978;
unsigned char var_15 = (unsigned char)209;
unsigned short var_18 = (unsigned short)8035;
int zero = 0;
unsigned short var_19 = (unsigned short)27486;
signed char var_20 = (signed char)-75;
unsigned int var_21 = 2833483438U;
unsigned char var_22 = (unsigned char)231;
short arr_0 [19] [19] ;
int arr_2 [19] [19] ;
long long int arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (short)24822;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = -7614622;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = -8727599318653249497LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
