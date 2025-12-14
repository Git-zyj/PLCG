#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 655580575U;
unsigned int var_4 = 1677290292U;
_Bool var_13 = (_Bool)1;
unsigned short var_16 = (unsigned short)6020;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_19 = -3333973792225872471LL;
short var_20 = (short)-26117;
long long int var_21 = 2223435520404233057LL;
short var_22 = (short)5266;
signed char var_23 = (signed char)28;
unsigned char arr_5 [13] ;
unsigned short arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned short)61704;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
