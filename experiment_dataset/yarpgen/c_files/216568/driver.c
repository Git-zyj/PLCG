#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -835816915;
unsigned int var_3 = 3642285416U;
int var_4 = 1489849001;
long long int var_6 = -8803501220355440356LL;
signed char var_8 = (signed char)-63;
unsigned short var_10 = (unsigned short)32717;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)223;
signed char var_14 = (signed char)-41;
unsigned int var_15 = 3404653789U;
int zero = 0;
unsigned char var_16 = (unsigned char)117;
signed char var_17 = (signed char)-86;
unsigned int var_18 = 172302132U;
unsigned short var_19 = (unsigned short)63855;
_Bool arr_7 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
