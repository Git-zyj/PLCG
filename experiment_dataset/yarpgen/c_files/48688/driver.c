#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11246429988232877177ULL;
short var_5 = (short)11653;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)120;
int zero = 0;
long long int var_12 = 7138883580858526590LL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 7144591949202469417ULL;
unsigned char var_15 = (unsigned char)244;
unsigned long long int var_16 = 18184536454376891883ULL;
int var_17 = -1086036412;
unsigned short arr_0 [23] [23] ;
long long int arr_2 [23] ;
unsigned int arr_3 [23] ;
unsigned short arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)50361;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -5769135321675120572LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 2902167214U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)65011;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
