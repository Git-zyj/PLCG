#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6535373957467109856LL;
_Bool var_7 = (_Bool)0;
signed char var_11 = (signed char)0;
int var_12 = 1833495731;
signed char var_13 = (signed char)-112;
int zero = 0;
unsigned int var_15 = 1537525079U;
signed char var_16 = (signed char)25;
unsigned long long int var_17 = 10577158664663682638ULL;
int var_18 = -447630004;
unsigned long long int var_19 = 4941602080940793341ULL;
_Bool arr_1 [17] ;
_Bool arr_2 [17] ;
unsigned long long int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 3539123204137935872ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
