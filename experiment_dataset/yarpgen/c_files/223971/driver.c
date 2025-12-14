#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21747;
unsigned char var_4 = (unsigned char)94;
short var_5 = (short)30763;
long long int var_6 = 3166372149000286095LL;
signed char var_7 = (signed char)-7;
long long int var_8 = -1516039914683049370LL;
long long int var_10 = 5812992184772536690LL;
long long int var_14 = -5793366254115995888LL;
int zero = 0;
signed char var_15 = (signed char)52;
_Bool var_16 = (_Bool)0;
int var_17 = -1969534505;
short var_18 = (short)-14650;
unsigned long long int var_19 = 5562775619498763499ULL;
unsigned long long int var_20 = 12945415408234538027ULL;
unsigned int var_21 = 2088814052U;
long long int arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = -1137908172507545073LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
