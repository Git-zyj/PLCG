#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)101;
unsigned char var_6 = (unsigned char)226;
short var_7 = (short)6486;
unsigned int var_8 = 659547891U;
int var_9 = 646464935;
short var_10 = (short)-20183;
_Bool var_13 = (_Bool)0;
int var_14 = 236007572;
int zero = 0;
unsigned int var_16 = 3890340804U;
signed char var_17 = (signed char)65;
_Bool var_18 = (_Bool)0;
signed char arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)10;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
