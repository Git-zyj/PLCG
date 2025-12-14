#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1552797477U;
long long int var_3 = -7952076946700843083LL;
unsigned short var_5 = (unsigned short)51719;
long long int var_7 = 4516388765590047080LL;
int var_8 = -1165953798;
signed char var_11 = (signed char)-56;
signed char var_12 = (signed char)-66;
signed char var_13 = (signed char)-58;
unsigned long long int var_14 = 16044594478758491378ULL;
int zero = 0;
unsigned long long int var_15 = 3284686620761178761ULL;
unsigned short var_16 = (unsigned short)10669;
long long int var_17 = -4732621537646417752LL;
short var_18 = (short)-8323;
long long int var_19 = 3226369874260125697LL;
short var_20 = (short)8548;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
int var_24 = -698316995;
_Bool var_25 = (_Bool)1;
unsigned int arr_2 [19] ;
unsigned short arr_9 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 136199183U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)26964;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
