#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-18;
signed char var_5 = (signed char)-86;
unsigned char var_6 = (unsigned char)152;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
long long int var_13 = -2931981985054561848LL;
unsigned int var_15 = 2418400001U;
unsigned long long int var_17 = 12067629823177542104ULL;
int zero = 0;
short var_18 = (short)-738;
int var_19 = -973520814;
unsigned char var_20 = (unsigned char)167;
_Bool var_21 = (_Bool)1;
short arr_0 [10] ;
_Bool arr_1 [10] ;
short arr_4 [10] ;
_Bool arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)-30723;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)-17122;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
