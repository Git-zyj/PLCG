#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)76;
unsigned long long int var_1 = 8869951495892650901ULL;
_Bool var_2 = (_Bool)1;
long long int var_3 = 7312220619044023704LL;
long long int var_4 = -8260778355487961383LL;
short var_5 = (short)-17484;
unsigned short var_6 = (unsigned short)15535;
int var_8 = -493009138;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 15928434741264206565ULL;
short var_12 = (short)-26284;
unsigned short var_14 = (unsigned short)5876;
unsigned long long int var_16 = 13057702740279034140ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)14607;
unsigned long long int var_19 = 4549969710535687933ULL;
int var_20 = -1633009572;
unsigned int var_21 = 2930794168U;
unsigned long long int arr_3 [18] ;
unsigned short arr_5 [18] [18] ;
signed char arr_7 [18] ;
unsigned int arr_8 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 18199551217739920382ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)39315;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (signed char)105;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = 3719101849U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
