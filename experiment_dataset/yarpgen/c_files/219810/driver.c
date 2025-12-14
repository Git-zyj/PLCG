#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)2750;
long long int var_7 = 2236335570494875889LL;
_Bool var_11 = (_Bool)1;
short var_12 = (short)8433;
long long int var_16 = -5575917393511161592LL;
signed char var_17 = (signed char)-83;
int zero = 0;
signed char var_20 = (signed char)91;
int var_21 = -768035702;
_Bool var_22 = (_Bool)1;
short var_23 = (short)4478;
unsigned long long int var_24 = 13252733969059403246ULL;
unsigned short arr_2 [18] ;
unsigned long long int arr_3 [18] [18] [18] ;
_Bool arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)49961;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 7483056879601716711ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
