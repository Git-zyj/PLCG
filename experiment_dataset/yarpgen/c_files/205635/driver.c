#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 696623434U;
int var_14 = 1282493080;
unsigned long long int var_16 = 2914777962782414735ULL;
unsigned char var_18 = (unsigned char)161;
short var_19 = (short)26228;
int zero = 0;
long long int var_20 = -444804964070577750LL;
unsigned long long int var_21 = 6052954743138143494ULL;
int var_22 = -922368555;
long long int var_23 = 4567801890313011725LL;
unsigned char arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)56;
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
