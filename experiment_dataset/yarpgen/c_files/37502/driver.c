#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9432612824067735347ULL;
unsigned int var_5 = 1246577019U;
unsigned short var_6 = (unsigned short)38031;
_Bool var_8 = (_Bool)0;
unsigned int var_13 = 2909630368U;
int var_14 = 144086881;
unsigned char var_16 = (unsigned char)226;
short var_17 = (short)-20366;
int var_18 = -213407109;
short var_19 = (short)-1024;
int zero = 0;
int var_20 = 937540401;
signed char var_21 = (signed char)109;
int var_22 = -1759842736;
unsigned long long int var_23 = 14531236086643710319ULL;
_Bool var_24 = (_Bool)1;
_Bool arr_0 [23] ;
unsigned int arr_1 [23] ;
unsigned short arr_2 [23] ;
int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 102879005U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)60358;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1785528169;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
