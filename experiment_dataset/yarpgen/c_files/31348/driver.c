#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 410336574869064305ULL;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-28;
signed char var_17 = (signed char)30;
unsigned long long int var_18 = 2780604205347504457ULL;
int zero = 0;
unsigned int var_20 = 116971723U;
short var_21 = (short)-28182;
signed char var_22 = (signed char)101;
long long int var_23 = 3630120096441289681LL;
unsigned char arr_0 [25] ;
short arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)22312;
}

void checksum() {
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
