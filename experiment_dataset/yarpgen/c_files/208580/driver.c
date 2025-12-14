#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)28123;
long long int var_5 = -4642978433237806395LL;
unsigned int var_8 = 1732794698U;
unsigned char var_10 = (unsigned char)15;
int zero = 0;
long long int var_12 = 5761665930815918963LL;
unsigned int var_13 = 3764029175U;
long long int var_14 = 6313168060130843324LL;
unsigned int var_15 = 1950341443U;
int var_16 = 1577541273;
_Bool var_17 = (_Bool)1;
unsigned int arr_5 [17] ;
int arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 3857884243U : 396867805U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1071307499 : -2038116436;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
