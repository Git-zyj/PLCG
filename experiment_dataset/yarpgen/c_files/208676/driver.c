#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6338415195659225120LL;
short var_3 = (short)4127;
int var_4 = -561157683;
int var_7 = -2006653825;
long long int var_8 = -2769931953699989802LL;
int zero = 0;
long long int var_11 = -6741248496952595440LL;
long long int var_12 = -3252044536843250032LL;
unsigned int var_13 = 520999706U;
int var_14 = -1853146514;
signed char var_15 = (signed char)-34;
int var_16 = -1894152516;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-96;
unsigned int arr_0 [16] ;
signed char arr_1 [16] ;
short arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1133969661U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)10781;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
