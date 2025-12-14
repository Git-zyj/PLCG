#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-24;
signed char var_3 = (signed char)20;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-25482;
unsigned short var_10 = (unsigned short)55848;
signed char var_11 = (signed char)-9;
int var_15 = -2120258070;
int zero = 0;
short var_16 = (short)10972;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)84;
signed char var_19 = (signed char)-115;
signed char arr_0 [14] [14] ;
short arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)-20350;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
