#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)164;
int var_4 = -21178910;
long long int var_11 = 3610034960911958397LL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-19;
int zero = 0;
unsigned short var_16 = (unsigned short)33563;
_Bool var_17 = (_Bool)1;
int var_18 = -1481247372;
_Bool var_19 = (_Bool)1;
int var_20 = -1510978033;
int var_21 = 1905617718;
unsigned long long int arr_0 [13] ;
unsigned long long int arr_3 [23] ;
unsigned long long int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 7540968422554540037ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 10269421623977422588ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 11422705058800000437ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
