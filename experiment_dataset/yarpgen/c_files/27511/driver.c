#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)38;
long long int var_1 = -7578933143394946185LL;
unsigned char var_3 = (unsigned char)4;
int var_6 = 879845394;
int var_8 = -1625256676;
long long int var_10 = 7120764161003413792LL;
unsigned short var_12 = (unsigned short)4877;
int zero = 0;
unsigned int var_15 = 2244849772U;
unsigned char var_16 = (unsigned char)135;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)55559;
short var_19 = (short)10286;
long long int var_20 = -1936877652176759247LL;
signed char arr_0 [13] ;
unsigned int arr_1 [13] ;
unsigned short arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 2983241091U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)20211;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
