#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1377967885;
short var_1 = (short)27796;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)251;
int zero = 0;
unsigned long long int var_10 = 144041521732156743ULL;
long long int var_11 = 976735069070457717LL;
short var_12 = (short)2684;
unsigned int var_13 = 178544268U;
signed char var_14 = (signed char)-35;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-6104;
unsigned char arr_1 [19] ;
signed char arr_2 [11] [11] ;
signed char arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-74;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
