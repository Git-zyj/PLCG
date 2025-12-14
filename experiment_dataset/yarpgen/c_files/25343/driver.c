#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2644093665U;
unsigned int var_3 = 1085378693U;
unsigned int var_5 = 3728222927U;
_Bool var_6 = (_Bool)1;
long long int var_7 = -4625696897034275129LL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 11674694509816719546ULL;
int zero = 0;
unsigned int var_11 = 499620403U;
_Bool var_12 = (_Bool)1;
int var_13 = 1354880796;
int var_14 = -699131023;
long long int arr_0 [15] ;
unsigned int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -5178204336819788271LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 1897251189U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
