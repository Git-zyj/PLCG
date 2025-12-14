#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1140906941;
short var_6 = (short)27102;
signed char var_11 = (signed char)-82;
int zero = 0;
short var_13 = (short)6758;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2034546524U;
_Bool var_17 = (_Bool)0;
short arr_0 [19] ;
unsigned long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)20899;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 2105305308862210015ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
