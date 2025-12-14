#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7725345571060428228LL;
int var_1 = 1178475474;
unsigned char var_2 = (unsigned char)120;
signed char var_7 = (signed char)-93;
unsigned char var_8 = (unsigned char)124;
unsigned int var_9 = 756171157U;
short var_10 = (short)-20569;
signed char var_14 = (signed char)55;
short var_15 = (short)-23654;
int zero = 0;
short var_16 = (short)30556;
unsigned long long int var_17 = 8218669710905384303ULL;
long long int var_18 = 4029607762585091813LL;
short var_19 = (short)30229;
unsigned int var_20 = 2238770726U;
_Bool var_21 = (_Bool)0;
unsigned int arr_0 [18] ;
short arr_1 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 1432212429U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-179 : (short)26593;
}

void checksum() {
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
