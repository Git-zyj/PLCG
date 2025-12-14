#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12048472348651674186ULL;
unsigned int var_7 = 111480U;
short var_8 = (short)4798;
unsigned long long int var_10 = 14871299528276602438ULL;
unsigned long long int var_13 = 3008783881602805760ULL;
int zero = 0;
unsigned long long int var_15 = 1823598658814001005ULL;
signed char var_16 = (signed char)-73;
unsigned short var_17 = (unsigned short)28075;
long long int arr_0 [14] ;
unsigned int arr_3 [14] ;
_Bool arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -1577879563923481364LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 3137543514U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
