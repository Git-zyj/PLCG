#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46229;
unsigned int var_3 = 668566195U;
signed char var_4 = (signed char)-29;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 13539759046280108036ULL;
unsigned int var_17 = 3213545138U;
long long int var_18 = -5455806841665610697LL;
unsigned long long int var_19 = 10382162153379053103ULL;
unsigned long long int var_20 = 16558197893578257434ULL;
short var_21 = (short)-28787;
_Bool arr_1 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
