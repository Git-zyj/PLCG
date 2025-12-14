#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -711099390;
signed char var_6 = (signed char)68;
_Bool var_8 = (_Bool)0;
long long int var_10 = -7473307266931481957LL;
long long int var_16 = 3052784840395412718LL;
unsigned int var_18 = 3277575916U;
int zero = 0;
long long int var_19 = -4108336073384322781LL;
signed char var_20 = (signed char)-123;
short var_21 = (short)17710;
long long int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1486032828441685293LL : -4518454046791389584LL;
}

void checksum() {
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
