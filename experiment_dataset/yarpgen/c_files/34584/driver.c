#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)210;
unsigned long long int var_3 = 12187069116020651318ULL;
unsigned long long int var_4 = 2946118006544473423ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)43295;
short var_9 = (short)-9665;
int zero = 0;
unsigned int var_12 = 3542769314U;
signed char var_13 = (signed char)66;
unsigned long long int var_14 = 14766803184566376435ULL;
unsigned short var_15 = (unsigned short)53437;
unsigned long long int var_16 = 6505176210617954581ULL;
unsigned char arr_1 [17] [17] ;
signed char arr_2 [17] ;
short arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)-5129;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
