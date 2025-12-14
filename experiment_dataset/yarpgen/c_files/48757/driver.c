#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59857;
unsigned long long int var_2 = 4377280025297674899ULL;
unsigned int var_3 = 2408526727U;
unsigned short var_6 = (unsigned short)43812;
short var_7 = (short)-30649;
short var_8 = (short)16615;
unsigned int var_9 = 2861845864U;
int zero = 0;
short var_12 = (short)25608;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3453635791U;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 4027722740U;
_Bool var_17 = (_Bool)0;
_Bool arr_3 [25] ;
_Bool arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
