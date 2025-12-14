#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)-126;
short var_7 = (short)-3830;
unsigned long long int var_8 = 3467491690922510320ULL;
unsigned long long int var_11 = 12399601075190830429ULL;
unsigned long long int var_12 = 13197017926143678347ULL;
unsigned long long int var_14 = 15633402876870623584ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)86;
unsigned char var_17 = (unsigned char)97;
_Bool var_18 = (_Bool)1;
unsigned long long int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 8029846027638103995ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
