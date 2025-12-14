#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6600;
unsigned char var_4 = (unsigned char)225;
unsigned short var_5 = (unsigned short)11044;
signed char var_7 = (signed char)-33;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)183;
_Bool var_15 = (_Bool)0;
unsigned int var_18 = 3281659186U;
int zero = 0;
int var_20 = 1137840350;
unsigned short var_21 = (unsigned short)5796;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 1960991569U;
unsigned char var_24 = (unsigned char)198;
long long int arr_1 [20] [20] ;
unsigned int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 910698641666451397LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 2394311234U;
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
