#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2790;
long long int var_2 = -4749683195552303370LL;
unsigned char var_3 = (unsigned char)231;
unsigned int var_5 = 3943559013U;
unsigned char var_7 = (unsigned char)178;
int zero = 0;
unsigned char var_10 = (unsigned char)6;
unsigned char var_11 = (unsigned char)117;
unsigned int var_12 = 3732340059U;
unsigned char var_13 = (unsigned char)237;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-8295;
unsigned short arr_1 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)18800;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
