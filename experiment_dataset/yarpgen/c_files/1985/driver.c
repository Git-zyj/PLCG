#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2933615191288206339ULL;
unsigned long long int var_8 = 5970432623843737071ULL;
unsigned long long int var_15 = 6054448733724873290ULL;
unsigned short var_16 = (unsigned short)24009;
unsigned int var_18 = 2321251287U;
int zero = 0;
unsigned long long int var_19 = 17118696856997656900ULL;
unsigned char var_20 = (unsigned char)8;
long long int var_21 = 3242628823345849775LL;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-25326;
unsigned long long int var_24 = 5070756626452957236ULL;
unsigned short arr_3 [24] ;
unsigned long long int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)29119;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 13117638507782160077ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
