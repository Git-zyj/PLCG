#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 453707161704136355LL;
unsigned long long int var_3 = 12870902061565331697ULL;
unsigned short var_4 = (unsigned short)3029;
int var_9 = 988391526;
short var_14 = (short)28124;
unsigned long long int var_16 = 17844664319383134129ULL;
int zero = 0;
int var_20 = -148661285;
signed char var_21 = (signed char)121;
_Bool var_22 = (_Bool)1;
int var_23 = -86024812;
unsigned long long int arr_1 [16] ;
unsigned short arr_5 [24] ;
_Bool arr_2 [16] ;
unsigned long long int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 2916445333790165454ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)22376;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 7546777599131411609ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
