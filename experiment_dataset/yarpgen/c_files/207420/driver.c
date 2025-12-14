#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 341606694;
short var_2 = (short)-9088;
int var_3 = -99829544;
_Bool var_4 = (_Bool)0;
int var_6 = 948960583;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 1111366973U;
short var_11 = (short)-3408;
int zero = 0;
long long int var_13 = 7583332627522677052LL;
unsigned int var_14 = 2334271299U;
unsigned short var_15 = (unsigned short)5230;
unsigned long long int var_16 = 12650192971034601632ULL;
short var_17 = (short)-46;
signed char var_18 = (signed char)21;
short var_19 = (short)22558;
long long int var_20 = 5762136157345951799LL;
int arr_2 [18] [18] ;
short arr_3 [18] [18] [18] ;
int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 321185525;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)31123;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 1136528292;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
