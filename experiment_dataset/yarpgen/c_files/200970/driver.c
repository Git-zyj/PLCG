#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-1;
_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)49830;
unsigned long long int var_14 = 17373702559433510891ULL;
unsigned char var_15 = (unsigned char)10;
unsigned int var_16 = 739728071U;
int arr_1 [10] ;
long long int arr_2 [10] ;
unsigned int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 1241264654;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1444538469485235226LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 503803979U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
