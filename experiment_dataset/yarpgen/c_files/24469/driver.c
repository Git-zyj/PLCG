#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44657;
short var_2 = (short)-7394;
unsigned long long int var_3 = 163561006427101950ULL;
unsigned short var_4 = (unsigned short)65025;
_Bool var_5 = (_Bool)0;
long long int var_7 = -924141127363551842LL;
int var_8 = -286148029;
short var_9 = (short)20979;
unsigned char var_11 = (unsigned char)130;
unsigned short var_12 = (unsigned short)30518;
unsigned int var_13 = 2310515384U;
long long int var_16 = 2486544204099446743LL;
int zero = 0;
unsigned long long int var_17 = 3772438190552930182ULL;
unsigned long long int var_18 = 1497718742963767564ULL;
int var_19 = -1443392111;
unsigned char var_20 = (unsigned char)26;
int var_21 = -1484986414;
unsigned int var_22 = 3623195656U;
long long int var_23 = 4984577497867655802LL;
unsigned long long int arr_0 [24] [24] ;
unsigned long long int arr_1 [24] [24] ;
long long int arr_2 [24] [24] [24] ;
unsigned long long int arr_3 [24] ;
short arr_6 [24] ;
signed char arr_7 [24] ;
unsigned long long int arr_4 [24] ;
unsigned int arr_5 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 13283126764591983927ULL : 17471202822184117023ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 1837072751210230940ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 8127297056781071383LL : 4929787316381998076LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 11025177443023508748ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (short)-6055;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 7719261316195520601ULL : 9845614483817877677ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1192885652U : 485031160U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
