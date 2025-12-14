#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)98;
unsigned int var_3 = 280302728U;
long long int var_5 = -2111909746167074317LL;
short var_6 = (short)22735;
long long int var_7 = -4885789676024331419LL;
int var_8 = -1679485960;
signed char var_9 = (signed char)-6;
unsigned int var_10 = 3246541821U;
int zero = 0;
signed char var_11 = (signed char)126;
signed char var_12 = (signed char)-86;
signed char var_13 = (signed char)-12;
unsigned short var_14 = (unsigned short)54765;
signed char var_15 = (signed char)-43;
signed char var_16 = (signed char)-1;
unsigned short var_17 = (unsigned short)45213;
signed char arr_4 [19] ;
signed char arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-87 : (signed char)-120;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
