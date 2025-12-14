#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17479126277867166283ULL;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-87;
long long int var_12 = -2595458808744665686LL;
int zero = 0;
unsigned int var_13 = 2765355854U;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-681;
short var_16 = (short)-10143;
unsigned int var_17 = 1815181971U;
signed char var_18 = (signed char)65;
unsigned int var_19 = 3654336514U;
unsigned short arr_4 [11] ;
short arr_7 [11] ;
int arr_10 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)48695;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-25601 : (short)1073;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? -171774875 : -1029271877;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
