#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_4 = (short)10082;
unsigned char var_5 = (unsigned char)198;
unsigned char var_6 = (unsigned char)43;
short var_7 = (short)-23792;
short var_8 = (short)-14393;
long long int var_10 = -3906059273056848662LL;
unsigned int var_11 = 3933211276U;
int zero = 0;
unsigned int var_12 = 1936612722U;
short var_13 = (short)-31939;
int var_14 = -1490495964;
int var_15 = 1103719599;
long long int var_16 = -7071685057580349447LL;
short arr_0 [22] ;
unsigned int arr_2 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)31962;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 3184819750U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
