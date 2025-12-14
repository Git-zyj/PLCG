#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10069747099432419612ULL;
long long int var_4 = -1752845770437310979LL;
_Bool var_5 = (_Bool)0;
int var_7 = 1449303489;
unsigned long long int var_11 = 15244842051757881819ULL;
int zero = 0;
short var_12 = (short)-8574;
long long int var_13 = 3649053043012955586LL;
short var_14 = (short)29728;
long long int arr_0 [12] ;
int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -4690464135598607283LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1564597893 : 1117807976;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
