#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -194675600;
unsigned char var_6 = (unsigned char)82;
unsigned short var_8 = (unsigned short)24768;
unsigned char var_12 = (unsigned char)241;
signed char var_14 = (signed char)126;
unsigned char var_15 = (unsigned char)189;
int zero = 0;
unsigned long long int var_19 = 2607601831830915861ULL;
short var_20 = (short)-19790;
unsigned char var_21 = (unsigned char)112;
unsigned int var_22 = 279578361U;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 1217152588U;
unsigned int arr_0 [12] [12] ;
unsigned int arr_1 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 300758301U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 67343727U;
}

void checksum() {
    hash(&seed, var_19);
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
