#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2597379217U;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)105;
signed char var_3 = (signed char)-1;
unsigned int var_4 = 2728055930U;
short var_9 = (short)4774;
unsigned short var_10 = (unsigned short)61579;
unsigned short var_11 = (unsigned short)43811;
signed char var_12 = (signed char)-35;
int zero = 0;
signed char var_13 = (signed char)18;
unsigned long long int var_14 = 1281495671328146296ULL;
long long int var_15 = -5394871496808005843LL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 194896161U;
unsigned int var_18 = 1671955159U;
signed char arr_0 [15] [15] ;
_Bool arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
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
