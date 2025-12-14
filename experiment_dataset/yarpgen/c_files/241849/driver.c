#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)3;
signed char var_2 = (signed char)46;
unsigned char var_6 = (unsigned char)69;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)25934;
unsigned short var_10 = (unsigned short)14825;
_Bool var_11 = (_Bool)1;
short var_15 = (short)-11367;
signed char var_16 = (signed char)87;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)63033;
unsigned short var_21 = (unsigned short)65177;
_Bool var_22 = (_Bool)1;
unsigned short arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned short)34572;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
