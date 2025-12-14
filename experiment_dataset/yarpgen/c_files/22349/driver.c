#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1481792523U;
int var_2 = 1085931946;
int var_5 = -872455752;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)7802;
long long int var_9 = -2500838278980666569LL;
signed char var_10 = (signed char)-70;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)434;
int var_13 = 29230074;
signed char var_14 = (signed char)67;
int zero = 0;
signed char var_15 = (signed char)-7;
signed char var_16 = (signed char)24;
unsigned long long int var_17 = 1333250100620452967ULL;
int var_18 = -578131109;
unsigned int arr_3 [11] [11] ;
unsigned int arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 1903504617U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 3597660480U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
