#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 2243242726U;
unsigned int var_14 = 3895980755U;
int var_15 = 812057023;
unsigned char var_18 = (unsigned char)190;
int zero = 0;
long long int var_20 = 7324573902574541990LL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)4562;
short var_23 = (short)27388;
int arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 1054208338;
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
