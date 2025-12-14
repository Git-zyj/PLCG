#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = 8719806350034276508LL;
unsigned char var_4 = (unsigned char)137;
int var_5 = -222756014;
short var_6 = (short)-16794;
unsigned int var_7 = 1341150226U;
unsigned char var_8 = (unsigned char)137;
signed char var_10 = (signed char)125;
int zero = 0;
unsigned long long int var_12 = 5546285055895992168ULL;
int var_13 = 853921899;
long long int var_14 = 2095986543032394809LL;
long long int var_15 = 5570402720300579608LL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 204767057U;
long long int arr_1 [24] ;
long long int arr_6 [24] [24] [24] [24] ;
long long int arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 6382886353067362785LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 5747928810536580475LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -1772034514278714924LL : 3737287235000584014LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
