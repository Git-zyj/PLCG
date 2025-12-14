#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)36;
short var_7 = (short)25515;
int zero = 0;
signed char var_13 = (signed char)-96;
short var_14 = (short)-31670;
signed char var_15 = (signed char)-87;
short var_16 = (short)17416;
signed char var_17 = (signed char)-20;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-7824;
unsigned short var_20 = (unsigned short)15144;
unsigned short var_21 = (unsigned short)43856;
unsigned short var_22 = (unsigned short)61172;
signed char var_23 = (signed char)95;
unsigned short arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned short)57326;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
