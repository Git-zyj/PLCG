#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2038402862U;
signed char var_9 = (signed char)119;
unsigned long long int var_12 = 4592424820617591473ULL;
unsigned char var_13 = (unsigned char)188;
long long int var_15 = 3045927218648343029LL;
int zero = 0;
short var_16 = (short)2117;
unsigned long long int var_17 = 6875666969704445036ULL;
short var_18 = (short)9798;
unsigned long long int var_19 = 17433928762176997749ULL;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)36816;
unsigned char arr_1 [24] ;
short arr_3 [24] [24] ;
unsigned int arr_11 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-4837;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = 2228623203U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
