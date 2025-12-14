#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)90;
unsigned short var_3 = (unsigned short)36456;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_11 = 7391580336198873850LL;
unsigned int var_12 = 2071012464U;
long long int var_13 = 3317950852247580873LL;
unsigned char var_14 = (unsigned char)244;
short arr_3 [13] ;
int arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)-22651;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = -890676893;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
