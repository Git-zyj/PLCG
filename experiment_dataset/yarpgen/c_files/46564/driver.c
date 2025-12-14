#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 4595489512168817506ULL;
int var_3 = 1569207650;
unsigned int var_4 = 657884571U;
unsigned short var_5 = (unsigned short)52260;
long long int var_8 = -1854159727073817950LL;
_Bool var_9 = (_Bool)1;
long long int var_10 = -4786118348442187562LL;
int zero = 0;
short var_12 = (short)244;
long long int var_13 = -7233555192653913350LL;
signed char var_14 = (signed char)120;
long long int var_15 = 8335653364039928183LL;
signed char var_16 = (signed char)-93;
_Bool var_17 = (_Bool)1;
short var_18 = (short)18587;
int var_19 = 304856910;
unsigned long long int var_20 = 13344455795186126199ULL;
unsigned short arr_1 [14] [14] ;
_Bool arr_4 [14] [14] [14] ;
_Bool arr_7 [13] ;
unsigned long long int arr_12 [24] [24] ;
unsigned int arr_13 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)5137 : (unsigned short)30375;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = 16203529009235748540ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = 1141396735U;
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
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
