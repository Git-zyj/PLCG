#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 378610448350574423ULL;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)97;
int var_17 = -825225809;
_Bool var_18 = (_Bool)1;
long long int var_19 = 7298120334289896766LL;
int zero = 0;
signed char var_20 = (signed char)99;
signed char var_21 = (signed char)50;
unsigned int var_22 = 2214563842U;
int var_23 = -35151544;
signed char var_24 = (signed char)122;
unsigned char var_25 = (unsigned char)45;
_Bool arr_2 [17] ;
unsigned long long int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 8827671160227081933ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
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
