#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1909296938;
unsigned long long int var_1 = 2422416338270693843ULL;
long long int var_2 = 7741144907687499766LL;
long long int var_4 = -2517123856647213153LL;
unsigned int var_5 = 328730546U;
unsigned short var_7 = (unsigned short)2562;
short var_8 = (short)21519;
unsigned char var_9 = (unsigned char)123;
short var_10 = (short)30609;
unsigned short var_11 = (unsigned short)16249;
int zero = 0;
unsigned int var_12 = 2235555308U;
short var_13 = (short)-6451;
unsigned char var_14 = (unsigned char)156;
unsigned int var_15 = 362658143U;
unsigned char var_16 = (unsigned char)72;
unsigned short var_17 = (unsigned short)42609;
unsigned short var_18 = (unsigned short)31555;
unsigned char arr_0 [15] ;
unsigned long long int arr_1 [15] ;
unsigned int arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 147887102832967051ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 112402785U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
