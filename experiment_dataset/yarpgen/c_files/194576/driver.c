#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4036534270608160562LL;
signed char var_3 = (signed char)115;
unsigned int var_8 = 1770675066U;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-107;
unsigned short var_13 = (unsigned short)9714;
unsigned int arr_4 [10] ;
int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 4239021817U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 1503969753;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
