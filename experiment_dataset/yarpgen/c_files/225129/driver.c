#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-18536;
long long int var_5 = -4157666801554542285LL;
unsigned int var_8 = 3927113768U;
long long int var_9 = 945188580125979786LL;
signed char var_10 = (signed char)-13;
unsigned long long int var_12 = 1184462810257449022ULL;
long long int var_13 = -4173134767210579437LL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)29682;
int zero = 0;
unsigned int var_18 = 3390073345U;
long long int var_19 = 1851154231501571929LL;
short var_20 = (short)-23887;
short var_21 = (short)-30898;
unsigned long long int var_22 = 6265114964173090887ULL;
unsigned int var_23 = 2977457684U;
short var_24 = (short)-11522;
_Bool arr_0 [15] ;
long long int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -8213265379986936194LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
