#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)165;
short var_6 = (short)29932;
signed char var_10 = (signed char)42;
int var_18 = -965944535;
int zero = 0;
unsigned char var_19 = (unsigned char)132;
signed char var_20 = (signed char)-92;
unsigned int var_21 = 2757877495U;
int var_22 = -1825934071;
short var_23 = (short)-17525;
int arr_1 [22] ;
unsigned long long int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -720391810;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 9849330169429664440ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
