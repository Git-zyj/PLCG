#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)3;
short var_9 = (short)-19376;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1124085616U;
unsigned int var_14 = 3921082291U;
unsigned char var_15 = (unsigned char)216;
unsigned int var_19 = 2236488483U;
int zero = 0;
unsigned int var_20 = 3191103031U;
short var_21 = (short)-18220;
short var_22 = (short)-31086;
short var_23 = (short)27171;
unsigned int var_24 = 117700660U;
int var_25 = 943870079;
unsigned int arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 1040218565U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
