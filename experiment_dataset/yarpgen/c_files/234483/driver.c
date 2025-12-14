#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_3 = (short)-10045;
unsigned char var_5 = (unsigned char)125;
long long int var_8 = 8324736466117151652LL;
unsigned int var_10 = 832768080U;
signed char var_12 = (signed char)-49;
short var_13 = (short)6977;
int zero = 0;
unsigned short var_15 = (unsigned short)38621;
signed char var_16 = (signed char)125;
short var_17 = (short)22869;
short var_18 = (short)24576;
signed char var_19 = (signed char)85;
unsigned char var_20 = (unsigned char)35;
long long int var_21 = -3126084340042180599LL;
short var_22 = (short)-11175;
signed char var_23 = (signed char)-93;
short var_24 = (short)23033;
short arr_2 [10] [10] ;
signed char arr_3 [17] ;
_Bool arr_7 [12] [12] ;
long long int arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-3036;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 2229986950479509635LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
