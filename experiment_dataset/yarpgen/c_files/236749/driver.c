#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)615;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
long long int var_5 = -6753238772178648869LL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
_Bool var_13 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 721314071U;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = -1271387669;
unsigned long long int var_19 = 7928402098352281466ULL;
_Bool var_20 = (_Bool)0;
short var_21 = (short)4184;
long long int var_22 = -8843521223339073611LL;
unsigned long long int var_23 = 10076501439819124394ULL;
unsigned short var_24 = (unsigned short)32667;
_Bool var_25 = (_Bool)0;
long long int var_26 = 1041808418260645762LL;
_Bool arr_0 [25] [25] ;
_Bool arr_1 [25] ;
unsigned char arr_3 [11] ;
short arr_4 [11] ;
unsigned char arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)757;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)191;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
