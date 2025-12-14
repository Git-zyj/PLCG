#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-124;
long long int var_6 = 5630826415996769156LL;
long long int var_9 = 2196441077604941327LL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)29943;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-3763;
signed char var_14 = (signed char)-57;
long long int var_17 = -7031442200927749446LL;
unsigned char var_18 = (unsigned char)103;
int zero = 0;
short var_19 = (short)-32029;
unsigned short var_20 = (unsigned short)54002;
signed char var_21 = (signed char)56;
signed char var_22 = (signed char)57;
long long int var_23 = -9021509200919346393LL;
_Bool arr_0 [17] ;
short arr_1 [17] ;
unsigned short arr_4 [17] [17] [17] ;
short arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)28196;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)48755;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)5615 : (short)21524;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
