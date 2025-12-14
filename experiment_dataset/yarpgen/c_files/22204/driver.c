#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_3 = 3562664677216591737LL;
unsigned long long int var_5 = 2180564862126846511ULL;
int var_7 = -1880729778;
long long int var_8 = -5162947274109077967LL;
unsigned long long int var_13 = 6733705363326193406ULL;
unsigned char var_14 = (unsigned char)48;
long long int var_15 = -8185603998224229449LL;
int zero = 0;
unsigned long long int var_17 = 5734272555748784277ULL;
_Bool var_18 = (_Bool)0;
long long int var_19 = 7251857114789903992LL;
int var_20 = -1304880970;
_Bool var_21 = (_Bool)1;
unsigned long long int arr_0 [12] [12] ;
int arr_1 [12] ;
_Bool arr_2 [12] ;
_Bool arr_3 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 16765139200261155981ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 604621906;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
