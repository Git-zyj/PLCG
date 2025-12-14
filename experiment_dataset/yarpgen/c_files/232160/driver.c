#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)10451;
signed char var_4 = (signed char)77;
_Bool var_6 = (_Bool)1;
int var_8 = -670947844;
unsigned short var_12 = (unsigned short)51197;
unsigned short var_14 = (unsigned short)55250;
unsigned char var_16 = (unsigned char)139;
int zero = 0;
short var_17 = (short)10706;
int var_18 = -375542707;
long long int var_19 = -6570871500162300394LL;
unsigned int var_20 = 3092302076U;
unsigned short var_21 = (unsigned short)56173;
signed char var_22 = (signed char)-21;
short var_23 = (short)-22616;
short var_24 = (short)-13875;
_Bool arr_0 [19] ;
long long int arr_1 [19] ;
unsigned short arr_2 [19] ;
long long int arr_5 [19] [19] ;
int arr_3 [19] ;
signed char arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 6636156085144470007LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)61650 : (unsigned short)59433;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 4799102374121439269LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -11977897 : 1998450072;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-64 : (signed char)108;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
