#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)137;
unsigned int var_1 = 3683450373U;
signed char var_3 = (signed char)-84;
unsigned char var_5 = (unsigned char)100;
unsigned short var_8 = (unsigned short)27834;
short var_9 = (short)6896;
signed char var_12 = (signed char)-21;
long long int var_13 = -865675822361370430LL;
long long int var_14 = 3406742684381707007LL;
long long int var_15 = -4762427556035317993LL;
unsigned int var_17 = 1982711437U;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2907732605U;
signed char var_20 = (signed char)43;
short arr_1 [21] ;
short arr_4 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-28211;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-4723;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
