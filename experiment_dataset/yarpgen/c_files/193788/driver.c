#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)84;
unsigned char var_5 = (unsigned char)136;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-14165;
unsigned int var_8 = 324727692U;
unsigned int var_12 = 1305369392U;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 16750958086515680239ULL;
unsigned int var_15 = 62831505U;
unsigned char var_16 = (unsigned char)193;
long long int var_17 = -2720307001449091333LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)31;
long long int var_20 = 707656230461448472LL;
unsigned short arr_11 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (unsigned short)45585;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
