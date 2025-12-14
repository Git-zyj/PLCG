#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16280808804339984127ULL;
unsigned int var_15 = 1142874105U;
int zero = 0;
long long int var_16 = 4040011430960107951LL;
short var_17 = (short)-27319;
long long int var_18 = 1230454936684064813LL;
signed char var_19 = (signed char)73;
signed char var_20 = (signed char)-5;
long long int var_21 = -4213051753903497447LL;
long long int arr_3 [22] ;
_Bool arr_4 [22] ;
_Bool arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -611104018234699007LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
