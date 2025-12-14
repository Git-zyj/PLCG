#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-18792;
unsigned long long int var_4 = 7992972824846665335ULL;
int var_11 = -1682971070;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 656501662U;
unsigned int var_14 = 2737010350U;
short var_15 = (short)13927;
long long int arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -5537427971899095309LL : 168400027320037389LL;
}

void checksum() {
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
