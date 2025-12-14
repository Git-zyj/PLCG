#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_6 = 1457152137;
signed char var_7 = (signed char)34;
unsigned int var_12 = 1680617392U;
int zero = 0;
unsigned long long int var_16 = 16344551648993298675ULL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 11031369025707285949ULL;
unsigned char var_19 = (unsigned char)88;
int arr_0 [18] ;
unsigned long long int arr_1 [18] ;
long long int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -479440098;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 14771280041600576107ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 2609188978449915353LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
