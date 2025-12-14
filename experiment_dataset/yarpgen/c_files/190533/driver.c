#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30148;
signed char var_3 = (signed char)-74;
signed char var_4 = (signed char)-108;
unsigned int var_5 = 579568406U;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned short var_13 = (unsigned short)26305;
long long int var_14 = 6986449201276008152LL;
short var_15 = (short)19842;
short var_16 = (short)13690;
signed char var_17 = (signed char)-120;
int zero = 0;
unsigned int var_18 = 3981316219U;
signed char var_19 = (signed char)75;
short var_20 = (short)956;
short var_21 = (short)25572;
signed char arr_4 [20] ;
short arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)29 : (signed char)39;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)10196 : (short)-15500;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
