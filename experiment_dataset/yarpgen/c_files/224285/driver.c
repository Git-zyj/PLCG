#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)70;
signed char var_2 = (signed char)56;
short var_4 = (short)-9363;
int var_7 = -124434946;
unsigned short var_9 = (unsigned short)38828;
int zero = 0;
unsigned short var_15 = (unsigned short)6845;
signed char var_16 = (signed char)-13;
unsigned short var_17 = (unsigned short)56440;
signed char var_18 = (signed char)116;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-10310;
signed char var_22 = (signed char)50;
unsigned short arr_2 [13] [13] ;
signed char arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)18521;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)46 : (signed char)118;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
