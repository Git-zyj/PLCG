#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)104;
unsigned int var_4 = 622185611U;
short var_7 = (short)-25072;
unsigned int var_8 = 947933079U;
signed char var_9 = (signed char)30;
unsigned int var_10 = 3206810846U;
int zero = 0;
unsigned short var_13 = (unsigned short)10535;
unsigned int var_14 = 3529763367U;
signed char var_15 = (signed char)111;
unsigned int var_16 = 3862931241U;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 2836987619667752585ULL;
unsigned long long int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 2540408974868442153ULL;
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
