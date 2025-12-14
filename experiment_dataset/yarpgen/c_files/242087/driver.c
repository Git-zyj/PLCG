#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3277110140U;
int var_1 = -1038362636;
int var_2 = -684303986;
unsigned int var_4 = 1285332639U;
unsigned char var_5 = (unsigned char)82;
signed char var_6 = (signed char)6;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 10781223954185162513ULL;
unsigned int var_9 = 3273525959U;
unsigned int var_12 = 1406314961U;
unsigned long long int var_13 = 7079936304654386859ULL;
int var_14 = -235224037;
unsigned short var_16 = (unsigned short)11822;
int zero = 0;
unsigned long long int var_18 = 11715155236885527334ULL;
int var_19 = 509140903;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)97;
unsigned long long int var_22 = 16632297485532040741ULL;
unsigned int var_23 = 3716143969U;
long long int var_24 = 2956616287576067867LL;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)100;
unsigned short var_27 = (unsigned short)30073;
unsigned short arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned short)17787;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
