#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)4156;
short var_3 = (short)-9348;
unsigned short var_12 = (unsigned short)5728;
unsigned short var_14 = (unsigned short)58478;
_Bool var_16 = (_Bool)1;
short var_18 = (short)11040;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 1511014858U;
int var_21 = -1342773034;
unsigned short var_22 = (unsigned short)18595;
short var_23 = (short)11367;
short arr_0 [18] ;
short arr_2 [18] [18] [18] ;
short arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)24833;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)24760;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)23768;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
