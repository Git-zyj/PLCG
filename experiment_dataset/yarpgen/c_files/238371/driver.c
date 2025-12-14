#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11265;
_Bool var_2 = (_Bool)0;
long long int var_3 = -7169612344254743960LL;
unsigned long long int var_4 = 17172412665704612573ULL;
unsigned int var_5 = 79978447U;
unsigned char var_8 = (unsigned char)127;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-39;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)144;
unsigned char var_14 = (unsigned char)79;
int var_15 = 1643801470;
_Bool arr_0 [19] ;
long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -9204214791692744627LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
