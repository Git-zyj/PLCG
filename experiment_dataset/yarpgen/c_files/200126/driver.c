#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20338;
signed char var_3 = (signed char)79;
unsigned char var_4 = (unsigned char)72;
unsigned int var_11 = 1884202982U;
int zero = 0;
unsigned int var_15 = 865813201U;
unsigned int var_16 = 213741151U;
short var_17 = (short)14129;
long long int var_18 = 8922539630186209639LL;
_Bool var_19 = (_Bool)0;
short var_20 = (short)1375;
unsigned long long int var_21 = 8345315698228150293ULL;
_Bool var_22 = (_Bool)0;
short var_23 = (short)8394;
int arr_0 [25] ;
_Bool arr_1 [25] [25] ;
unsigned int arr_3 [25] ;
signed char arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -261637678;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 4018042350U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)(-127 - 1);
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
