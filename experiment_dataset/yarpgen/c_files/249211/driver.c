#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -310086733;
signed char var_2 = (signed char)-114;
short var_7 = (short)-15797;
int var_9 = 1512938109;
unsigned int var_12 = 1763367749U;
int zero = 0;
signed char var_14 = (signed char)21;
long long int var_15 = -2745583079849246234LL;
short var_16 = (short)-5921;
_Bool var_17 = (_Bool)1;
_Bool arr_0 [21] ;
int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 249387906 : 308013738;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
