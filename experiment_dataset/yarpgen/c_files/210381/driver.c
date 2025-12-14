#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)14805;
short var_10 = (short)5137;
unsigned short var_13 = (unsigned short)44653;
int zero = 0;
unsigned short var_18 = (unsigned short)51661;
short var_19 = (short)10840;
unsigned short var_20 = (unsigned short)50840;
unsigned short var_21 = (unsigned short)3648;
short arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)-32599;
}

void checksum() {
    hash(&seed, var_18);
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
