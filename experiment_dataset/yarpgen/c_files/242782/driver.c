#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2845370457U;
unsigned short var_9 = (unsigned short)47248;
unsigned int var_10 = 1122722176U;
long long int var_12 = -8150499113353388764LL;
int zero = 0;
short var_14 = (short)-11632;
signed char var_15 = (signed char)66;
unsigned short var_16 = (unsigned short)23802;
unsigned short var_17 = (unsigned short)11752;
unsigned short arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)49053;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
