#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_4 = 547424214;
short var_6 = (short)16445;
signed char var_8 = (signed char)-77;
int var_12 = 594117381;
unsigned int var_14 = 2672300362U;
unsigned int var_16 = 672833384U;
int zero = 0;
short var_19 = (short)15095;
long long int var_20 = 2132925818356052218LL;
signed char var_21 = (signed char)92;
int var_22 = -1309192451;
short var_23 = (short)-27260;
short arr_2 [14] [14] ;
unsigned long long int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-4372;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 10352506490928293165ULL : 8193614462687049092ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
