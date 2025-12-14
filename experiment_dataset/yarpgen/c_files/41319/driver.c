#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 254002436941651356ULL;
unsigned short var_3 = (unsigned short)18867;
unsigned char var_6 = (unsigned char)216;
short var_7 = (short)-13123;
signed char var_9 = (signed char)-109;
short var_11 = (short)-7367;
_Bool var_14 = (_Bool)1;
long long int var_17 = 5001474735134201668LL;
unsigned long long int var_18 = 2749454748702493219ULL;
int zero = 0;
unsigned long long int var_19 = 17783822698345338888ULL;
long long int var_20 = 4014455490656287004LL;
unsigned long long int var_21 = 9709568076094244446ULL;
unsigned long long int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 17676307249828224132ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
