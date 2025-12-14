#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-49;
signed char var_1 = (signed char)-98;
unsigned short var_4 = (unsigned short)53345;
short var_5 = (short)-17243;
_Bool var_7 = (_Bool)1;
short var_9 = (short)655;
short var_10 = (short)-18251;
signed char var_13 = (signed char)41;
signed char var_14 = (signed char)-101;
unsigned short var_15 = (unsigned short)20484;
int zero = 0;
short var_18 = (short)-3432;
short var_19 = (short)14124;
short var_20 = (short)-32411;
signed char var_21 = (signed char)30;
short var_22 = (short)-9743;
signed char arr_1 [14] [14] ;
short arr_4 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-68 : (signed char)-66;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)29162 : (short)12104;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
