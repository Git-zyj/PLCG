#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1440;
unsigned long long int var_1 = 7668904629788095777ULL;
signed char var_2 = (signed char)100;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 4742513861909820690ULL;
signed char var_6 = (signed char)0;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)15326;
int var_13 = 972537472;
long long int var_14 = -2237973518775158630LL;
int var_15 = -2122667291;
short var_16 = (short)16762;
signed char var_17 = (signed char)-33;
signed char var_18 = (signed char)-32;
signed char arr_0 [19] ;
unsigned int arr_1 [19] ;
unsigned char arr_2 [14] ;
int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1967047925U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 2048993768;
}

void checksum() {
    hash(&seed, var_11);
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
