#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_4 = 295239406;
unsigned short var_6 = (unsigned short)15512;
long long int var_10 = -4352774779997619151LL;
short var_13 = (short)-11150;
signed char var_14 = (signed char)-44;
int zero = 0;
unsigned int var_15 = 3964460851U;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 12458534279262009351ULL;
int var_18 = 1320652902;
short var_19 = (short)-21503;
_Bool var_20 = (_Bool)0;
int var_21 = -1078990352;
unsigned long long int arr_4 [19] ;
unsigned int arr_7 [19] [19] ;
signed char arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 7618152953614073242ULL : 5992861484916983918ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 4144105898U : 4234019032U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (signed char)-26;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
