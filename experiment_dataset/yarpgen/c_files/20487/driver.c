#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned long long int var_17 = 10673180639592350811ULL;
int var_18 = -1536515280;
signed char var_19 = (signed char)32;
int var_20 = 336357267;
int var_21 = -2032435723;
signed char var_22 = (signed char)-116;
unsigned long long int var_23 = 9043926427918023110ULL;
signed char var_24 = (signed char)-60;
signed char var_25 = (signed char)77;
signed char arr_12 [13] ;
signed char arr_13 [13] ;
unsigned long long int arr_14 [13] ;
int arr_19 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = 9248344595770166513ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = -1960017376;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
