#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)152;
unsigned char var_2 = (unsigned char)234;
unsigned long long int var_4 = 1283327498335388492ULL;
short var_5 = (short)-9577;
unsigned char var_8 = (unsigned char)141;
short var_9 = (short)-13251;
short var_10 = (short)18782;
unsigned long long int var_11 = 6162629557134768081ULL;
signed char var_13 = (signed char)-76;
unsigned int var_14 = 3822889339U;
short var_15 = (short)13380;
unsigned short var_16 = (unsigned short)11833;
unsigned short var_17 = (unsigned short)51044;
unsigned short var_18 = (unsigned short)29229;
unsigned char var_19 = (unsigned char)3;
int zero = 0;
long long int var_20 = 3558345251087620026LL;
long long int var_21 = -3240076879818212197LL;
unsigned int var_22 = 3413712001U;
signed char var_23 = (signed char)-92;
short var_24 = (short)-31340;
signed char var_25 = (signed char)-126;
short var_26 = (short)-2297;
unsigned short var_27 = (unsigned short)54417;
_Bool var_28 = (_Bool)0;
signed char var_29 = (signed char)8;
unsigned long long int var_30 = 4630626474847049741ULL;
short arr_3 [18] ;
_Bool arr_4 [18] [18] ;
unsigned char arr_10 [23] ;
short arr_13 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-17971 : (short)-6764;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (short)9066;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
