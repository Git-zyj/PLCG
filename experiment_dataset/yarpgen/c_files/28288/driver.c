#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10733;
unsigned short var_3 = (unsigned short)48834;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)5874;
signed char var_8 = (signed char)117;
signed char var_9 = (signed char)-57;
unsigned short var_11 = (unsigned short)46526;
unsigned char var_13 = (unsigned char)170;
unsigned short var_14 = (unsigned short)54874;
int zero = 0;
unsigned char var_16 = (unsigned char)168;
unsigned char var_17 = (unsigned char)20;
short var_18 = (short)-14419;
short var_19 = (short)23700;
_Bool arr_1 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
