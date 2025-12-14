#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-16568;
unsigned long long int var_5 = 12319887095979620655ULL;
signed char var_7 = (signed char)84;
short var_8 = (short)-3472;
long long int var_10 = 123364290146489980LL;
int zero = 0;
int var_13 = 370939773;
signed char var_14 = (signed char)101;
unsigned short var_15 = (unsigned short)30052;
unsigned short var_16 = (unsigned short)2958;
unsigned char var_17 = (unsigned char)41;
unsigned long long int var_18 = 16248160131196282130ULL;
unsigned short var_19 = (unsigned short)28520;
_Bool var_20 = (_Bool)1;
unsigned int arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 2860437079U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
