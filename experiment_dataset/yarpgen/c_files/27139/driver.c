#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8691779180815061384ULL;
unsigned long long int var_1 = 8982982446849173472ULL;
short var_2 = (short)-17033;
long long int var_3 = 6585295731680825025LL;
_Bool var_5 = (_Bool)0;
long long int var_6 = -1256283117923181941LL;
unsigned long long int var_7 = 14999651323014126387ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2753806920U;
int var_10 = 452442402;
int zero = 0;
short var_11 = (short)12545;
unsigned long long int var_12 = 11940741330086351183ULL;
signed char var_13 = (signed char)21;
unsigned int var_14 = 308159390U;
signed char var_15 = (signed char)-58;
unsigned int var_16 = 3843091489U;
unsigned long long int var_17 = 5420085787182585341ULL;
_Bool var_18 = (_Bool)0;
signed char arr_1 [17] [17] ;
int arr_3 [17] ;
unsigned long long int arr_8 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1980099430 : -1792277590;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3995125163813944493ULL : 9022994910589946927ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
