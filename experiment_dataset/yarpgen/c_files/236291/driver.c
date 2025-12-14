#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13583;
unsigned long long int var_3 = 10108534705978123673ULL;
unsigned int var_6 = 1963872096U;
unsigned long long int var_7 = 4878349073958159218ULL;
unsigned long long int var_8 = 12114108484570667260ULL;
short var_10 = (short)-8782;
_Bool var_11 = (_Bool)1;
short var_16 = (short)13716;
short var_17 = (short)13443;
int zero = 0;
unsigned long long int var_18 = 5315104786164343667ULL;
signed char var_19 = (signed char)103;
short var_20 = (short)-24629;
short var_21 = (short)28837;
unsigned long long int var_22 = 4218817662739910568ULL;
unsigned long long int var_23 = 2797760823138862935ULL;
signed char var_24 = (signed char)118;
unsigned long long int var_25 = 6120888056906746575ULL;
short var_26 = (short)-19067;
unsigned long long int arr_1 [16] ;
short arr_3 [16] ;
signed char arr_4 [16] ;
unsigned long long int arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 35667970826634353ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)22508;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 15143097227879720427ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
