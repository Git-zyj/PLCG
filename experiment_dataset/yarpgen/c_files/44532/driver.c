#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2177330619U;
long long int var_7 = 8498481433826613919LL;
int var_12 = -1538551321;
unsigned char var_13 = (unsigned char)3;
short var_15 = (short)29293;
int zero = 0;
unsigned long long int var_16 = 2834988696097649867ULL;
unsigned char var_17 = (unsigned char)192;
unsigned long long int var_18 = 2282951279775644484ULL;
short var_19 = (short)6427;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)43;
unsigned int var_22 = 1098349487U;
_Bool arr_10 [10] ;
int arr_11 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 79893113 : -654879029;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
