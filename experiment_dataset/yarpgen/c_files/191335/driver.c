#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1740074953835506813LL;
int var_2 = 2132926908;
int var_3 = -1669124421;
int var_4 = 741826602;
unsigned short var_5 = (unsigned short)58527;
signed char var_8 = (signed char)-93;
short var_9 = (short)-16259;
unsigned long long int var_11 = 1061104708672895867ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = 904631045054737211LL;
short var_14 = (short)-18880;
long long int var_15 = -2634176147546401902LL;
unsigned short var_16 = (unsigned short)47927;
unsigned long long int var_17 = 17174961660540234858ULL;
long long int var_18 = 9005673893158428164LL;
signed char arr_0 [23] [23] ;
short arr_5 [23] ;
_Bool arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)28168;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
