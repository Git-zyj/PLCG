#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1944284166;
unsigned short var_6 = (unsigned short)35313;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-11572;
unsigned short var_10 = (unsigned short)25654;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_16 = (short)-2324;
short var_17 = (short)23715;
signed char var_18 = (signed char)65;
unsigned int var_19 = 2408516556U;
unsigned short var_20 = (unsigned short)50122;
_Bool var_21 = (_Bool)1;
signed char arr_0 [18] ;
unsigned char arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)31;
}

void checksum() {
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
