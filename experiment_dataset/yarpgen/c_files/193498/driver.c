#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1264018077U;
unsigned char var_2 = (unsigned char)23;
short var_3 = (short)-26319;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-88;
unsigned long long int var_9 = 13409208076587018315ULL;
int zero = 0;
long long int var_10 = -1914244814289370629LL;
unsigned int var_11 = 1991800018U;
unsigned short var_12 = (unsigned short)12414;
unsigned char var_13 = (unsigned char)42;
_Bool arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
