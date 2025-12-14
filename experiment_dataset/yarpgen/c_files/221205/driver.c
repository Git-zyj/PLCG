#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)21;
signed char var_9 = (signed char)56;
unsigned long long int var_11 = 6333172815006710048ULL;
long long int var_13 = -4643608257027446989LL;
int zero = 0;
unsigned int var_15 = 3570830U;
int var_16 = -692005086;
_Bool var_17 = (_Bool)1;
int var_18 = 1252741218;
unsigned long long int var_19 = 2395701866678268425ULL;
signed char var_20 = (signed char)75;
unsigned int arr_0 [19] [19] ;
unsigned short arr_1 [19] ;
signed char arr_3 [19] ;
int arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 1762889584U : 471277448U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)64015;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -1856425605 : 2106087317;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
