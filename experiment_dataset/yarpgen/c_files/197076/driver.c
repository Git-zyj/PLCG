#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11373959593982251403ULL;
unsigned short var_2 = (unsigned short)22605;
_Bool var_11 = (_Bool)0;
signed char var_17 = (signed char)59;
int zero = 0;
unsigned long long int var_19 = 5708160882931162108ULL;
long long int var_20 = -8027495703309355655LL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2795150634U;
signed char arr_1 [24] ;
unsigned int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1474267686U : 135730943U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
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
