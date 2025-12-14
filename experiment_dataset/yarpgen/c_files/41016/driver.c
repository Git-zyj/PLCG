#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24192;
int var_2 = -437335089;
_Bool var_3 = (_Bool)1;
long long int var_5 = -5044800532347724073LL;
_Bool var_7 = (_Bool)0;
long long int var_8 = -2905036259964588019LL;
signed char var_12 = (signed char)-126;
int zero = 0;
unsigned char var_13 = (unsigned char)102;
unsigned short var_14 = (unsigned short)25761;
int var_15 = -222999290;
signed char var_16 = (signed char)-63;
int var_17 = 2038642172;
unsigned char var_18 = (unsigned char)62;
long long int arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 1167576552713874756LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
