#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -2130001979;
unsigned int var_6 = 622161332U;
int var_7 = -1007811436;
_Bool var_8 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)-83;
unsigned short var_21 = (unsigned short)49628;
signed char var_22 = (signed char)-86;
long long int var_23 = 5452999212652712054LL;
_Bool var_24 = (_Bool)0;
unsigned short arr_0 [15] ;
short arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)15306;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-14822;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
