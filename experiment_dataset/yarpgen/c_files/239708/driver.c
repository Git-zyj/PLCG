#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 851749965448233728ULL;
_Bool var_2 = (_Bool)1;
unsigned short var_7 = (unsigned short)56771;
unsigned char var_11 = (unsigned char)224;
long long int var_12 = -154333144830163441LL;
int zero = 0;
int var_14 = 1031063782;
short var_15 = (short)-24883;
unsigned int var_16 = 2328350917U;
signed char var_17 = (signed char)-9;
int var_18 = 2099426840;
unsigned int var_19 = 1092195847U;
int var_20 = 1592325897;
unsigned int var_21 = 3415204735U;
unsigned short arr_0 [13] ;
long long int arr_1 [13] ;
int arr_2 [13] ;
short arr_4 [13] [13] ;
unsigned int arr_6 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)16727;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -7323845436231253337LL : -2836650806746685673LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -743001185;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (short)8498;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 160011726U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
