#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22652;
long long int var_2 = -6523475327749496471LL;
int var_3 = 168936560;
signed char var_5 = (signed char)35;
_Bool var_6 = (_Bool)1;
long long int var_9 = -739783538795208203LL;
long long int var_10 = -4535151373896281448LL;
int zero = 0;
long long int var_12 = -7801896392030466256LL;
signed char var_13 = (signed char)74;
short var_14 = (short)7261;
short var_15 = (short)24770;
unsigned char var_16 = (unsigned char)245;
unsigned int var_17 = 3899230044U;
unsigned int arr_19 [15] ;
int arr_20 [15] ;
short arr_21 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = 3154471797U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = 459189573;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = (short)4838;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
