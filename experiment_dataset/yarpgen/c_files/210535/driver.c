#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3275252626316137888LL;
signed char var_4 = (signed char)-89;
unsigned char var_5 = (unsigned char)44;
unsigned char var_6 = (unsigned char)56;
short var_9 = (short)-28630;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-28208;
unsigned int var_12 = 568951441U;
unsigned int var_13 = 1377899959U;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_15 = 520150906;
unsigned int var_16 = 1214304270U;
signed char var_17 = (signed char)-37;
short var_18 = (short)-1467;
_Bool arr_0 [20] [20] ;
short arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)-14929;
}

void checksum() {
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
