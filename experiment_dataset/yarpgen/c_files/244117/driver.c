#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9821991910014701252ULL;
long long int var_3 = -2765567825828818907LL;
signed char var_9 = (signed char)-73;
unsigned char var_12 = (unsigned char)234;
long long int var_13 = -4446306626531546261LL;
int zero = 0;
short var_18 = (short)23354;
unsigned char var_19 = (unsigned char)91;
unsigned char var_20 = (unsigned char)49;
unsigned long long int var_21 = 12004631785283731651ULL;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 721330193U;
signed char var_24 = (signed char)-80;
signed char arr_3 [12] [12] ;
int arr_5 [12] [12] ;
int arr_12 [15] ;
int arr_13 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = -1729980140;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = -235555374;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = -705024303;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
