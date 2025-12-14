#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
unsigned char var_1 = (unsigned char)29;
unsigned int var_3 = 1282378043U;
int var_8 = -1730049815;
int zero = 0;
unsigned short var_13 = (unsigned short)9513;
signed char var_14 = (signed char)-87;
unsigned int var_15 = 854758338U;
unsigned char var_16 = (unsigned char)4;
unsigned long long int var_17 = 11889281075148391749ULL;
_Bool var_18 = (_Bool)0;
unsigned short arr_1 [17] ;
unsigned int arr_2 [17] ;
signed char arr_7 [16] [16] ;
unsigned short arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)24700;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1354351973U : 3392010384U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (unsigned short)64435;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
