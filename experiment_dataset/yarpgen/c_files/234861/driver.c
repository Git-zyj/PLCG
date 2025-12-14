#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2718899373100395183ULL;
long long int var_1 = -1851062067887442686LL;
unsigned char var_2 = (unsigned char)118;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)31;
signed char var_10 = (signed char)(-127 - 1);
int zero = 0;
unsigned int var_11 = 2901720754U;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-50;
long long int var_14 = 7689807545859574411LL;
unsigned short var_15 = (unsigned short)62964;
signed char arr_0 [18] ;
short arr_3 [18] [18] ;
unsigned short arr_5 [18] [18] [18] ;
long long int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-957;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)23976;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = -1821476272849404746LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
