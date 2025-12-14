#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 742627875253686092LL;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)206;
signed char var_4 = (signed char)102;
unsigned char var_6 = (unsigned char)39;
int var_8 = 2042257815;
int var_10 = -512109406;
unsigned char var_11 = (unsigned char)247;
signed char var_12 = (signed char)-102;
long long int var_14 = -1834254167850033488LL;
unsigned int var_16 = 1401867831U;
int zero = 0;
unsigned char var_18 = (unsigned char)226;
_Bool var_19 = (_Bool)0;
int var_20 = -952336917;
int var_21 = -1272423590;
unsigned int var_22 = 2428019320U;
long long int var_23 = 3724425658080822679LL;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)0;
long long int var_26 = 443589298231362676LL;
unsigned char var_27 = (unsigned char)41;
_Bool var_28 = (_Bool)1;
_Bool arr_1 [16] ;
unsigned char arr_2 [16] ;
long long int arr_3 [16] [16] ;
long long int arr_4 [16] ;
int arr_8 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = -6242921811059450122LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 97818564520863707LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 2120615088 : -1789349600;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
