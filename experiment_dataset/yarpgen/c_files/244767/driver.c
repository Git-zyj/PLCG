#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-59;
long long int var_1 = -3579019624202041868LL;
unsigned int var_9 = 2234016992U;
unsigned char var_12 = (unsigned char)0;
long long int var_19 = -8784726105059566491LL;
int zero = 0;
unsigned int var_20 = 396341200U;
short var_21 = (short)2901;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 5296325873859085271ULL;
unsigned short var_24 = (unsigned short)30361;
long long int var_25 = 1826821372543932998LL;
long long int arr_0 [23] [23] ;
signed char arr_2 [23] [23] ;
unsigned short arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 5200750884847091396LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)51699;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
