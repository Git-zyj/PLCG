#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11552423486268579357ULL;
unsigned int var_2 = 2340893654U;
long long int var_3 = -7712348353726004890LL;
unsigned char var_5 = (unsigned char)244;
unsigned int var_6 = 2936323401U;
unsigned long long int var_8 = 13458709510316325835ULL;
unsigned char var_9 = (unsigned char)215;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 606945809U;
_Bool var_13 = (_Bool)0;
long long int var_14 = -8179672192798925671LL;
unsigned char var_15 = (unsigned char)38;
int zero = 0;
signed char var_16 = (signed char)16;
long long int var_17 = -3847392004859219432LL;
int var_18 = -1483917069;
int var_19 = -1903852443;
int var_20 = 1676229109;
int var_21 = -1787132574;
short var_22 = (short)22348;
int var_23 = -1133979105;
unsigned int var_24 = 677581689U;
_Bool arr_0 [17] [17] ;
unsigned short arr_1 [17] ;
unsigned long long int arr_2 [17] ;
unsigned int arr_3 [17] ;
unsigned char arr_5 [17] [17] ;
unsigned int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)65494;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 16072210669146582770ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 2100023215U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 3575999486U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
