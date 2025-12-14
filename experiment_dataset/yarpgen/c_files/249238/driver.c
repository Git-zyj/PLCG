#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25141;
unsigned short var_3 = (unsigned short)23265;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)73;
signed char var_9 = (signed char)49;
unsigned char var_10 = (unsigned char)69;
short var_11 = (short)-18558;
int zero = 0;
short var_12 = (short)-13253;
int var_13 = -2066736460;
_Bool var_14 = (_Bool)1;
signed char arr_0 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)23;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
