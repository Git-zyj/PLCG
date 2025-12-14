#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6587;
unsigned int var_3 = 2299445696U;
long long int var_8 = -5699843090554870577LL;
long long int var_11 = -7193187750627100342LL;
int var_14 = -1879189399;
unsigned int var_15 = 2722398949U;
int zero = 0;
int var_16 = -1999377270;
unsigned long long int var_17 = 14411098913887855751ULL;
int var_18 = -229761088;
_Bool var_19 = (_Bool)1;
long long int var_20 = -1809207600034058210LL;
long long int var_21 = 7364151123360284076LL;
long long int var_22 = -5206957460138683820LL;
int var_23 = 1813851821;
_Bool arr_3 [20] [20] ;
_Bool arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
