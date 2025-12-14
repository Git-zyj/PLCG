#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27550;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 745251879U;
unsigned char var_7 = (unsigned char)205;
unsigned char var_11 = (unsigned char)200;
int zero = 0;
unsigned int var_16 = 725207301U;
int var_17 = 1290221253;
_Bool var_18 = (_Bool)1;
int var_19 = -1800152200;
int arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1295591597;
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
