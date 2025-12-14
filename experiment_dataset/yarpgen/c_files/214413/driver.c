#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)110;
signed char var_5 = (signed char)-32;
unsigned int var_8 = 2728241752U;
short var_10 = (short)5763;
unsigned int var_12 = 1533956512U;
_Bool var_13 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 590365619U;
int zero = 0;
short var_19 = (short)-1937;
unsigned short var_20 = (unsigned short)40747;
short var_21 = (short)414;
unsigned int var_22 = 3363704307U;
signed char var_23 = (signed char)27;
short arr_0 [18] ;
short arr_1 [18] ;
unsigned short arr_2 [18] [18] ;
short arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)4703;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)15284;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)32792;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-1817;
}

void checksum() {
    hash(&seed, var_19);
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
