#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1033681291115402829LL;
unsigned short var_3 = (unsigned short)48286;
short var_4 = (short)-23945;
short var_5 = (short)-4563;
int var_6 = 1733902094;
unsigned int var_7 = 1200471021U;
signed char var_8 = (signed char)-90;
long long int var_11 = -3987718187413055662LL;
short var_14 = (short)1222;
unsigned char var_15 = (unsigned char)213;
int zero = 0;
unsigned long long int var_16 = 8178946929029244709ULL;
signed char var_17 = (signed char)124;
unsigned int var_18 = 1034370107U;
_Bool var_19 = (_Bool)0;
long long int var_20 = -8517209484760329398LL;
_Bool var_21 = (_Bool)0;
unsigned int arr_15 [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 3951821319U : 3813724841U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
