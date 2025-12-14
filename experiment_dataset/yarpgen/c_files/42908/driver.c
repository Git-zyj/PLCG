#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7689;
unsigned long long int var_1 = 11385762180483415395ULL;
long long int var_5 = -3901109545820089010LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 6939492307707107297ULL;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)63372;
short var_12 = (short)16966;
unsigned long long int var_15 = 3863216949955575128ULL;
int zero = 0;
int var_16 = 497188724;
long long int var_17 = -175678795248405578LL;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 4291796930U;
_Bool arr_0 [18] ;
short arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)6566;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
