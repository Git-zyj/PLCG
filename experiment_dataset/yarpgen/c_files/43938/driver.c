#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)112;
unsigned char var_1 = (unsigned char)136;
unsigned long long int var_2 = 9025091955611542563ULL;
long long int var_3 = -6626140211612751711LL;
signed char var_7 = (signed char)56;
signed char var_8 = (signed char)-24;
long long int var_10 = 8155018525040889388LL;
unsigned short var_12 = (unsigned short)8200;
unsigned short var_13 = (unsigned short)21829;
int var_14 = -43646460;
short var_15 = (short)1273;
short var_16 = (short)-19200;
_Bool var_17 = (_Bool)0;
long long int var_19 = -4382357003021657842LL;
int zero = 0;
long long int var_20 = -7954874250262147105LL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)53;
signed char var_24 = (signed char)112;
unsigned short arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned short)21420;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
