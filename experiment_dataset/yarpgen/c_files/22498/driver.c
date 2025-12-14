#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 364667331;
int var_2 = -197933050;
unsigned int var_3 = 3173708264U;
unsigned short var_4 = (unsigned short)23584;
short var_6 = (short)-9394;
unsigned long long int var_9 = 7992501744718506770ULL;
long long int var_10 = -186769610752569429LL;
long long int var_11 = -2815123929074974465LL;
short var_13 = (short)9656;
unsigned short var_14 = (unsigned short)40257;
unsigned short var_15 = (unsigned short)45714;
int zero = 0;
signed char var_16 = (signed char)35;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)108;
short var_19 = (short)12198;
signed char var_20 = (signed char)-110;
unsigned short arr_1 [18] ;
short arr_2 [18] ;
int arr_3 [18] [18] ;
unsigned short arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)22862;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)-9260;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 127073597;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)11728;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
