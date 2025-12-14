#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-113;
_Bool var_12 = (_Bool)0;
int var_17 = -2002201182;
int zero = 0;
short var_18 = (short)2538;
unsigned int var_19 = 1071430379U;
unsigned int var_20 = 2490968323U;
unsigned short var_21 = (unsigned short)32229;
unsigned char var_22 = (unsigned char)245;
unsigned int arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 2151628078U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
