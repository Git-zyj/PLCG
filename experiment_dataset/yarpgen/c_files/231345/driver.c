#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1203171954U;
short var_1 = (short)-19722;
long long int var_2 = -8700039382282979139LL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)4391;
unsigned short var_10 = (unsigned short)5885;
int zero = 0;
short var_13 = (short)-4491;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)20976;
unsigned short var_17 = (unsigned short)32611;
unsigned int var_18 = 120793890U;
unsigned int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 3039198972U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
