#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)57529;
unsigned int var_3 = 1568345863U;
unsigned long long int var_4 = 13963991249826734328ULL;
_Bool var_6 = (_Bool)1;
long long int var_7 = 3569422734047075003LL;
long long int var_11 = 6764449264454479745LL;
int zero = 0;
unsigned int var_12 = 1471177401U;
unsigned long long int var_13 = 15161687330811128276ULL;
unsigned short var_14 = (unsigned short)62502;
_Bool var_15 = (_Bool)1;
long long int var_16 = -5344977598403582440LL;
unsigned long long int var_17 = 8365438154717221121ULL;
long long int var_18 = -6324250196562288678LL;
_Bool var_19 = (_Bool)0;
short arr_0 [16] ;
signed char arr_1 [16] ;
signed char arr_5 [21] [21] ;
_Bool arr_6 [21] [21] ;
unsigned char arr_2 [16] ;
unsigned char arr_3 [16] ;
int arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)-25528;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)83;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = -1092610901;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
